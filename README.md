# Mobilighter

Mobilighter is a lightweight project that bridges some basic user interface (and not only) functions between Android and iOS platforms because of [J2ObjC](http://j2objc.org) code translation standard compliance. It lets you dive deeper into your platform independent coding with less need to implement platform specific coding.

Quick demo of how login screen interactions could be implemented.

```java
...
    /**
	  * This function should be translated using j2objc.
	  * Android code will pass Button as loginButton and EditText as email and
	  * password widgets.
	  * 
	  * iOS code would pass UIButton and UITextField respectively.
	  * 
	  * While widgets would be created and laid out in platform specific way, 
	  * interacting with them can be done in platform independent way using
	  * Mobilighter.
	  * 
	  * Platfrom dependent UI widgets are passed as objects. Mobilighter will
	  * do platform specific things internally.
	  */
    public void loginScreenConnect(
            final Object emailWidget, /* EditText or UITextField*/
            final Object passwordWidget,
            final Object loginButton, /* Button or UIButton */
            final Object activityOrViewController /* Activity or ViewController */
            ) {
        try {
            mobilighter.setContext(activityOrViewController);
            mobilighter.setPlaceholder(emailWidget, "e-mail address");
            mobilighter.setPlaceholder(passwordWidget, "password");
            mobilighter.setText(loginButton, "Login");

            mobilighter.addActionListener(loginButton, new MobilAction() {
                public void onAction(Object param) {
                		mobilighter.showWaitPopup("Wait", "Processing...");
                    loginScreenDoLogin(emailWidget, passwordWidget, activityOrViewController);
                }
            });
...
```

[J2ObjC](http://j2objc.org) does not cover user interface widgets. Mobilighter lets you interact with simple widgets like TextBoxes, Labels, CheckBoxes etc. It's pretty often when you need to make a decision based on check-box selection, get a value from the text box and continue, or receive an event from the button.

Using Java as your primary coding language
you can get or set widget's text value without dealing with platform specific clases such as ```UILabel``` or ```TextView```. You can attach action listener to a button, process click events, ask user questions by displaying popup windows and proceed according to user inputs. ```J2ObjC``` translated code will perform identically or similarly on iOS.



Mobilighter will use platform specific widgets based on whether your code runs on Android or iOS. 

## Demo

You can see examples of repository usage in [SQLighter demo](https://github.com/vals-productions/sqlighter/tree/master/demo) projects for Android and iOS platforms.

