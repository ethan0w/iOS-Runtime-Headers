/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate> {
    <NSObject> * _context;
    <XPCNSServiceConnectionDelegate> * _delegate;
    XPCServiceConnection * _serviceConnection;
}

@property (nonatomic, retain) <NSObject> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <XPCNSServiceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (void)XPCServiceConnectionDidDisconnect:(id)arg1;
- (id)context;
- (id)delegate;
- (id)initWithXPCServiceConnection:(id)arg1;
- (void)sendMessage:(id)arg1 withHandler:(id /* block */)arg2;
- (id)serviceName;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shutDownCompletionBlock:(id /* block */)arg1;

@end
