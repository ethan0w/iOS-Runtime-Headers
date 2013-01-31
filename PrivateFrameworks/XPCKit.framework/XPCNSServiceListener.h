/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class XPCServiceListener, <XPCNSServiceListenerDelegate>, NSString;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate> {
    XPCServiceListener *_serviceListener;
    <XPCNSServiceListenerDelegate> *_delegate;
}

@property(readonly) NSString * serviceName;
@property(readonly) <XPCNSServiceListenerDelegate> * delegate;


- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (BOOL)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)delegate;
- (void).cxx_destruct;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)start;
- (id)serviceName;

@end
