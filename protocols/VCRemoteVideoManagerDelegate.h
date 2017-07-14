/* Generated by RuntimeBrowser.
 */

@protocol VCRemoteVideoManagerDelegate <NSObject>

@required

- (void)connectionDidChangeWithLocalInterfaceType:(NSString *)arg1 remoteInterfaceType:(NSString *)arg2 streamToken:(int)arg3;
- (void)didReceiveFirstRemoteFrameForStreamToken:(int)arg1;
- (void)releaseQueueForStreamToken:(int)arg1;
- (void)remoteMediaDidStall:(BOOL)arg1 streamToken:(int)arg2;
- (void)remoteScreenAttributesDidChange:(VideoAttributes *)arg1 streamToken:(int)arg2;
- (void)remoteVideoAttributesDidChange:(VideoAttributes *)arg1 streamToken:(int)arg2;
- (void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(int)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 streamToken:(int)arg2;

@optional

- (void)remoteVideoServerDidDie;

@end
