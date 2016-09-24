//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ..//android/com/vals/a2ios/mobilighter/impl/MobilCallImpl.java
//

#ifndef _ComValsA2iosMobilighterImplMobilCallImpl_H_
#define _ComValsA2iosMobilighterImplMobilCallImpl_H_

#include "J2ObjC_header.h"
#include "com/vals/a2ios/mobilighter/intf/MobilCall.h"
#include "java/lang/Thread.h"

@class JavaIoOutputStream;
@class JavaLangException;
@class JavaLangStringBuilder;
@class JavaNetHttpURLConnection;
@class JavaNetURL;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol MobilCallBack;

@interface MobilCallImpl : NSObject < MobilCall > {
 @public
  JavaNetURL *url_;
  NSString *baseUrl_;
  NSString *relativeUrl_;
  NSString *urlParamString_;
  NSString *method_;
  NSString *name_;
  JavaNetHttpURLConnection *connection_;
  JavaLangStringBuilder *stringBuilder_;
  id<JavaUtilMap> paramMap_;
  id<JavaUtilMap> urlParamMap_;
  NSString *jsonPayload_;
  NSString *charset_;
  jint responseStatus_;
  NSString *responseContent_;
  NSString *cookie_;
  id<MobilCallBack> callBack_;
  JavaIoOutputStream *outputStream_;
  id<JavaUtilMap> httpHeaders_;
  id<JavaUtilList> throwableList_;
}

#pragma mark Public

- (instancetype)init;

+ (NSString *)actualUrlWithNSString:(NSString *)url
                       withNSString:(NSString *)paramString;

- (void)addHeaderWithNSString:(NSString *)name
                 withNSString:(NSString *)value;

- (void)addParameterWithNSString:(NSString *)name
                          withId:(id)value;

- (void)addParameterWithNSString:(NSString *)name
                          withId:(id)value
                 withJavaUtilMap:(id<JavaUtilMap>)map;

- (void)addUrlParameterWithNSString:(NSString *)name
                             withId:(id)value;

- (void)clearCookie;

- (void)clearThrowableList;

+ (NSString *)concatUrlWithNSString:(NSString *)url1
                       withNSString:(NSString *)url2;

- (id<MobilCallBack>)getCallBack;

+ (NSString *)getParametersStrWithJavaUtilMap:(id<JavaUtilMap>)paramMap;

- (jint)getResponseStatus;

- (id<JavaUtilList>)getThrowableList;

+ (jboolean)isEmptyWithNSString:(NSString *)s1;

- (void)remoteCallMakeWithBoolean:(jboolean)isBlocking;

- (void)remoteCallMakeAndWait;

- (void)remoteCallMakeOnNewThread;

- (void)setBaseUrlWithNSString:(NSString *)baseUrl;

- (void)setCallBackWithMobilCallBack:(id<MobilCallBack>)callBack;

- (void)setCookieHeaderWithNSString:(NSString *)c;

- (void)setJsonPayloadWithNSString:(NSString *)json;

- (void)setMethodWithNSString:(NSString *)method;

- (void)setNameWithNSString:(NSString *)name;

- (void)setParamMapWithJavaUtilMap:(id<JavaUtilMap>)paramMap;

- (void)setRelativeUrlWithNSString:(NSString *)relativeUrl;

#pragma mark Protected

- (void)beforeConnect;

- (void)connect;

- (void)consumeResponse;

- (void)finishWithErrorWithJavaLangException:(JavaLangException *)e;

- (void)finishWithSuccess;

- (jboolean)isErrorWithInt:(jint)responseStatus;

- (void)prepareAndConnect;

- (jboolean)processServerResponseWithBoolean:(jboolean)isLastCall;

- (void)readResponseCookieWithJavaNetHttpURLConnection:(JavaNetHttpURLConnection *)connection;

- (void)setHeaderWithNSString:(NSString *)name
                 withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(MobilCallImpl)

J2OBJC_FIELD_SETTER(MobilCallImpl, url_, JavaNetURL *)
J2OBJC_FIELD_SETTER(MobilCallImpl, baseUrl_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, relativeUrl_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, urlParamString_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, method_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, name_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, connection_, JavaNetHttpURLConnection *)
J2OBJC_FIELD_SETTER(MobilCallImpl, stringBuilder_, JavaLangStringBuilder *)
J2OBJC_FIELD_SETTER(MobilCallImpl, paramMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(MobilCallImpl, urlParamMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(MobilCallImpl, jsonPayload_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, charset_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, responseContent_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, cookie_, NSString *)
J2OBJC_FIELD_SETTER(MobilCallImpl, callBack_, id<MobilCallBack>)
J2OBJC_FIELD_SETTER(MobilCallImpl, outputStream_, JavaIoOutputStream *)
J2OBJC_FIELD_SETTER(MobilCallImpl, httpHeaders_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(MobilCallImpl, throwableList_, id<JavaUtilList>)

FOUNDATION_EXPORT jboolean MobilCallImpl_isEmptyWithNSString_(NSString *s1);

FOUNDATION_EXPORT NSString *MobilCallImpl_getParametersStrWithJavaUtilMap_(id<JavaUtilMap> paramMap);

FOUNDATION_EXPORT NSString *MobilCallImpl_actualUrlWithNSString_withNSString_(NSString *url, NSString *paramString);

FOUNDATION_EXPORT NSString *MobilCallImpl_concatUrlWithNSString_withNSString_(NSString *url1, NSString *url2);

FOUNDATION_EXPORT void MobilCallImpl_init(MobilCallImpl *self);

FOUNDATION_EXPORT MobilCallImpl *new_MobilCallImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(MobilCallImpl)

@compatibility_alias ComValsA2iosMobilighterImplMobilCallImpl MobilCallImpl;

@interface MobilCallImpl_MobilCallThreadImpl : JavaLangThread

#pragma mark Public

- (instancetype)initWithMobilCallBack:(id<MobilCallBack>)callback
                    withMobilCallImpl:(MobilCallImpl *)netCall;

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(MobilCallImpl_MobilCallThreadImpl)

FOUNDATION_EXPORT void MobilCallImpl_MobilCallThreadImpl_initWithMobilCallBack_withMobilCallImpl_(MobilCallImpl_MobilCallThreadImpl *self, id<MobilCallBack> callback, MobilCallImpl *netCall);

FOUNDATION_EXPORT MobilCallImpl_MobilCallThreadImpl *new_MobilCallImpl_MobilCallThreadImpl_initWithMobilCallBack_withMobilCallImpl_(id<MobilCallBack> callback, MobilCallImpl *netCall) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(MobilCallImpl_MobilCallThreadImpl)

#endif // _ComValsA2iosMobilighterImplMobilCallImpl_H_
