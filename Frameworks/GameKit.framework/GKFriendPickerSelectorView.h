/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKHeaderSegmentedControl;

@interface GKFriendPickerSelectorView : UIView <GKHeaderSegmentedControlDelegate> {
    GKHeaderSegmentedControl *_scopeControl;
    BOOL _showsNearbyPlayers;
}

@property(retain) GKHeaderSegmentedControl * scopeControl;
@property BOOL showsNearbyPlayers;
@property unsigned int scope;


- (void)setScope:(unsigned int)arg1;
- (unsigned int)scope;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (id)scopeControl;
- (void)setupLabels;
- (void)setScopeControl:(id)arg1;
- (void)headerSegmentedControlChanged:(id)arg1;
- (void)setShowsNearbyPlayers:(BOOL)arg1;
- (BOOL)showsNearbyPlayers;

@end
