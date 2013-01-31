/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKChallengeEventHandlerDelegate>, GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject  {
    <GKChallengeEventHandlerDelegate> *_delegateWeak;
    GKChallengeInternal *_pendingReceivedChallenge;
    GKChallengeInternal *_pendingCompletedChallenge;
}

@property <GKChallengeEventHandlerDelegate> * delegate;
@property(retain) GKChallengeInternal * pendingReceivedChallenge;
@property(retain) GKChallengeInternal * pendingCompletedChallenge;

+ (id)challengeEventHandler;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)pendingCompletedChallenge;
- (id)pendingReceivedChallenge;
- (void)loadPhotoAndGoalTextForPlayer:(id)arg1 challenge:(id)arg2 hander:(id)arg3;
- (void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(id)arg3;
- (void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(id)arg3;
- (void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(id)arg3;
- (void)showBannerForChallenge:(id)arg1 complete:(id)arg2;
- (void)setPendingCompletedChallenge:(id)arg1;
- (void)setPendingReceivedChallenge:(id)arg1;
- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)receivedChallengeSelected:(id)arg1;

@end
