/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOrientationService : NSObject {
    FBOrientationServiceServer * _server;
}

+ (id)sharedInstance;

- (id)init;
- (void)noteInterfaceOrientationChanged:(int)arg1;
- (void)noteInterfaceOrientationChanged:(int)arg1 animationSettings:(id)arg2 direction:(int)arg3;

@end
