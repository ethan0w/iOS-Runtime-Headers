/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKChallenge, NSString;

@interface GKChallengeFriendPickerViewController : GKFriendPickerViewController  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    GKChallenge *_challenge;
    NSString *_goalText;
}

@property(copy) id handler;
@property(retain) GKChallenge * challenge;
@property(retain) NSString * goalText;


- (void)setChallenge:(id)arg1;
- (id)challenge;
- (void)dealloc;
- (void)setHandler:(id)arg1;
- (id)handler;
- (void)loadView;
- (id)goalText;
- (void)dismissPicker;
- (void)setGoalText:(id)arg1;
- (id)initWithTheme:(id)arg1 forChallenge:(id)arg2 challengeText:(id)arg3;
- (void)setPlayerRangeText;
- (void)showMessageViewController;
- (id)initWithTheme:(id)arg1;

@end
