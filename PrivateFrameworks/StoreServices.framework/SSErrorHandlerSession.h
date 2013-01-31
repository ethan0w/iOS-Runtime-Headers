/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCConnection, NSDictionary, NSObject<OS_dispatch_queue>;

@interface SSErrorHandlerSession : NSObject  {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_properties;
    long long _sessionID;
}


- (void)dealloc;
- (id)init;
- (void)retry;
- (void)redirectToURL:(id)arg1;
- (void)performDefaultHandling;
- (void)_setErrorProperties:(id)arg1;
- (void)_setControlConnection:(id)arg1;
- (void)_setSessionID:(long long)arg1;
- (id)valueForProperty:(id)arg1;

@end
