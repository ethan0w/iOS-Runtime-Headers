/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class AVController, <CNFAudioDeviceControllerProtocol>, NSArray, NSDictionary, NSString;

@interface CNFAudioDeviceController : NSObject  {
    <CNFAudioDeviceControllerProtocol> *_delegate;
    AVController *_avController;
    NSDictionary *_pickedRoute;
    NSArray *_pickableRoutes;
    NSString *_currentAudioRoute;
}

@property(retain) NSString * currentAudioRoute;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)isUsingBlueToothLEA;
- (BOOL)isAirPlayMirroring;
- (BOOL)pickRouteWithUID:(id)arg1;
- (void)_pickableRoutesChanged;
- (void)invalidateAVController;
- (void)setCurrentAudioRoute:(id)arg1;
- (BOOL)_routeIsAirTunes:(id)arg1;
- (id)currentAudioRoute;
- (BOOL)audioCategoryIsTTY;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (void)pickRouteAtIndex:(unsigned int)arg1;
- (void)restorePickedRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickSpeakerRoute;
- (int)numberOfAudioRoutes;
- (BOOL)receiverRouteIsPicked;
- (BOOL)speakerRouteIsPicked;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (void)_mediaServerDied;
- (BOOL)_pickRoute:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (id)_pickedRoute;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (id)_pickableRoutes;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(BOOL*)arg2;
- (void)_registerForAVControllerNotifications;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (void)clearCachedRoutes;
- (void)setAVController:(id)arg1;

@end
