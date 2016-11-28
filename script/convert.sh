#!/bin/sh

#  mobilighter
#
#  Created by Vlad Sayenko on 8/3/15.
#  Copyright (c) 2015 Vlad Sayenko. All rights reserved.

ROOT_DIR=../

#
# Java interfaces to Objc Protocols conversion
#

./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/intf/Mobilighter.java
./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/intf/MobilAction.java
./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/intf/MobilCallBack.java
./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/intf/MobilCall.java
./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/intf/MobilColor.java

# ./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/impl/MUtil.java
./j2objc.sh $ROOT_DIR/ios/j2objc $ROOT_DIR/android com/vals/a2ios/mobilighter/impl/MobilCallImpl.java
# end
