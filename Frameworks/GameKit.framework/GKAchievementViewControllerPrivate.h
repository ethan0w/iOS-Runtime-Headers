/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTableViewCell, GKGameRecord, NSArray, NSMutableArray, GKAchievementSection;

@interface GKAchievementViewControllerPrivate : GKTableViewControllerV2  {
    NSMutableArray *_achievements;
    struct { 
        unsigned int playButtonVisible : 1; 
        unsigned int usePlayerBackground : 1; 
        unsigned int translucentNavBar : 1; 
        unsigned int reserved : 27; 
    } _flags;
    GKGameRecord *_gameRecord;
    GKTableViewCell *_detailHeaderCell;
    BOOL _showRatingControl;
    GKAchievementSection *_achievementViewSection;
}

@property(retain) GKGameRecord * gameRecord;
@property(retain) NSArray * achievements;
@property(getter=isPlayButtonVisible) BOOL playButtonVisible;
@property(retain) GKTableViewCell * detailHeaderCell;
@property BOOL showRatingControl;
@property(retain) GKAchievementSection * achievementViewSection;


- (void)dealloc;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (float)marginForTableView:(id)arg1;
- (id)title;
- (void)setShowRatingControl:(BOOL)arg1;
- (BOOL)showRatingControl;
- (void)setDetailHeaderCell:(id)arg1;
- (id)detailHeaderCell;
- (void)setPlayButtonVisible:(BOOL)arg1;
- (BOOL)isPlayButtonVisible;
- (id)achievementViewSection;
- (void)setAchievementViewSection:(id)arg1;
- (id)tokenImageForAchievement:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setupSectionDataSource:(id)arg1;
- (id)initWithGameRecord:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (id)gameRecord;
- (void)setAchievements:(id)arg1;
- (id)achievements;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkResetContents;
- (void)playTapped;

@end
