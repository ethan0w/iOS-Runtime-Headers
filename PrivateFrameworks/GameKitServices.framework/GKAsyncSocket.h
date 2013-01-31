/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSObject<OS_dispatch_queue>;

@interface GKAsyncSocket : NSObject  {
}

@property NSObject<OS_dispatch_queue> * targetQueue;
@property(copy) id receiveDataHandler;
@property(copy) id connectedHandler;
@property(retain) id socketName;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)invalidate;
- (void)setSyncQueue:(id)arg1;
- (id)connectedHandler;
- (id)targetQueue;
- (id)receiveDataHandler;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (id)socketName;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;
- (void)setTargetQueue:(id)arg1;
- (void)setSocketName:(id)arg1;
- (void)setConnectedHandler:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setReceiveDataHandler:(id)arg1;
- (id)syncQueue;

@end
