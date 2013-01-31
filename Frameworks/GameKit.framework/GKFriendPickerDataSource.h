/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementDescription, GKGame, GKFriendPickerListSection, NSError, NSSet, NSDictionary, GKFriendPickerSelectorSection, NSOrderedSet, GKBackgroundView, NSString, NSMutableDictionary, GKReachability;

@interface GKFriendPickerDataSource : GKSectionArrayDataSource  {
    GKFriendPickerSelectorSection *_selectorSection;
    GKFriendPickerListSection *_listSection;
    GKFriendPickerListSection *_neverPlayedSection;
    GKFriendPickerListSection *_alreadyEarnedSection;
    NSOrderedSet *_friends;
    NSOrderedSet *_recentPlayers;
    NSOrderedSet *_playedFriends;
    NSOrderedSet *_neverPlayedFriends;
    NSDictionary *_friendsDict;
    NSDictionary *_nonFriendsDict;
    NSDictionary *_ranksDict;
    NSMutableDictionary *_cellStatusDict;
    NSOrderedSet *_recentPlayerIDs;
    NSOrderedSet *_playedPlayerIDs;
    NSSet *_uninvitableFriends;
    NSMutableDictionary *_nearbyDict;
    NSOrderedSet *_nearbyPlayers;
    GKBackgroundView *_statusView;
    NSError *_loadError;
    BOOL _browsingForNearbyPlayers;
    GKAchievementDescription *_achievementDescription;
    GKReachability *_reachability;
    BOOL _reachable;
    GKGame *_game;
    unsigned int _context;
    NSOrderedSet *_haveEarnedPlayerIDs;
    NSString *_leaderboardID;
    NSString *_achievementID;
    NSOrderedSet *_haveEarnedPlayers;
}

@property(retain) GKFriendPickerSelectorSection * selectorSection;
@property(retain) GKFriendPickerListSection * listSection;
@property(retain) GKFriendPickerListSection * neverPlayedSection;
@property(retain) GKFriendPickerListSection * alreadyEarnedSection;
@property(retain) NSSet * uninvitableFriends;
@property BOOL showsNearbyPlayers;
@property BOOL browsingForNearbyPlayers;
@property unsigned int scope;
@property(retain) GKGame * game;
@property unsigned int context;
@property(retain) NSString * leaderboardID;
@property(retain) NSString * achievementID;
@property(retain) NSDictionary * friendsDict;
@property(retain) NSDictionary * nonFriendsDict;
@property(retain) NSDictionary * ranksDict;
@property(retain) NSMutableDictionary * cellStatusDict;
@property(retain) NSOrderedSet * recentPlayerIDs;
@property(retain) NSOrderedSet * playedPlayerIDs;
@property(retain) NSOrderedSet * haveEarnedPlayerIDs;
@property(retain) NSOrderedSet * friends;
@property(retain) NSOrderedSet * recentPlayers;
@property(retain) NSOrderedSet * playedFriends;
@property(retain) NSOrderedSet * neverPlayedFriends;
@property(retain) NSMutableDictionary * nearbyDict;
@property(retain) NSOrderedSet * nearbyPlayers;
@property(retain) NSOrderedSet * haveEarnedPlayers;
@property(retain) GKBackgroundView * statusView;
@property(retain) NSError * loadError;
@property(retain) GKAchievementDescription * achievementDescription;
@property(retain) GKReachability * reachability;
@property BOOL reachable;


- (void)setScope:(unsigned int)arg1;
- (unsigned int)scope;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)setContext:(unsigned int)arg1;
- (unsigned int)context;
- (id)haveEarnedPlayers;
- (id)haveEarnedPlayerIDs;
- (id)reachability;
- (id)achievementDescription;
- (BOOL)browsingForNearbyPlayers;
- (id)nearbyDict;
- (id)playedPlayerIDs;
- (id)recentPlayerIDs;
- (id)ranksDict;
- (id)nonFriendsDict;
- (id)friendsDict;
- (id)neverPlayedFriends;
- (id)playedFriends;
- (id)recentPlayers;
- (void)setAlreadyEarnedSection:(id)arg1;
- (id)selectorSection;
- (void)updateRecentPlayersWithCompletionHander:(id)arg1;
- (void)updatePlayedOrNotPlayers;
- (void)setRanksDict:(id)arg1;
- (void)setHaveEarnedPlayerIDs:(id)arg1;
- (void)setPlayedPlayerIDs:(id)arg1;
- (void)setRecentPlayerIDs:(id)arg1;
- (void)setFriendsDict:(id)arg1;
- (void)setAchievementDescription:(id)arg1;
- (void)setNeverPlayedFriends:(id)arg1;
- (void)setHaveEarnedPlayers:(id)arg1;
- (void)setPlayedFriends:(id)arg1;
- (void)setRecentPlayers:(id)arg1;
- (void)setNonFriendsDict:(id)arg1;
- (void)addNearbyPlayer:(id)arg1;
- (void)updateNearbyPlayers;
- (void)setNearbyDict:(id)arg1;
- (void)updateStatusView;
- (void)updateListSectionForScope;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)reachabilityDidChange:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setNeverPlayedSection:(id)arg1;
- (void)setListSection:(id)arg1;
- (void)setSelectorSection:(id)arg1;
- (void)setCellStatusDict:(id)arg1;
- (id)cellStatusDict;
- (void)setLoadError:(id)arg1;
- (id)loadError;
- (void)setReachable:(BOOL)arg1;
- (BOOL)reachable;
- (void)setNearbyPlayers:(id)arg1;
- (id)nearbyPlayers;
- (void)setFriends:(id)arg1;
- (void)setStatusView:(id)arg1;
- (id)statusView;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (void)tableView:(id)arg1 updateStatusViewBeforeLoading:(id)arg2;
- (id)selectedPlayers;
- (id)alreadyEarnedSection;
- (void)setShowsNearbyPlayers:(BOOL)arg1;
- (void)setUninvitableFriends:(id)arg1;
- (id)uninvitableFriends;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (BOOL)showsNearbyPlayers;
- (id)neverPlayedSection;
- (id)listSection;
- (void)setAchievementID:(id)arg1;
- (id)achievementID;
- (void)setLeaderboardID:(id)arg1;
- (id)leaderboardID;
- (id)friends;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (void)prepareSections;
- (void)setGame:(id)arg1;
- (id)game;

@end
