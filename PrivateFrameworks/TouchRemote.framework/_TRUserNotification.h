/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface _TRUserNotification : NSObject {
    long  _response;
    unsigned long  _responseFlags;
    struct __CFUserNotification { } * _userNotification;
}

@property (nonatomic, readonly) struct __CFUserNotification { }*CFUserNotification;
@property (nonatomic, readonly) BOOL didAccept;
@property (nonatomic, readonly) long response;
@property (nonatomic, readonly) unsigned long responseFlags;

+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;
+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(BOOL)arg5 dismissOnUnlock:(BOOL)arg6;

- (struct __CFUserNotification { }*)CFUserNotification;
- (void)cancel;
- (void)dealloc;
- (BOOL)didAccept;
- (id)initWithDictionary:(id)arg1 options:(unsigned long)arg2 error:(int*)arg3;
- (long)response;
- (unsigned long)responseFlags;
- (void)show;
- (id)textFieldValueAtIndex:(unsigned int)arg1;

@end
