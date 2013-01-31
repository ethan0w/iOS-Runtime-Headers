/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSIndexPath, <GKTurnBasedMatchDetailViewControllerDelegate>, GKTurnBasedMatch, GKSectionArrayDataSource, GKTurnBasedParticipant, NSMutableDictionary;

@interface GKTurnBasedMatchDetailViewController : GKTableViewControllerV2  {
    <GKTurnBasedMatchDetailViewControllerDelegate> *_delegate;
    GKTurnBasedMatch *_match;
    NSMutableDictionary *_players;
    GKSectionArrayDataSource *_matchDetailDataSource;
    int _matchStyle;
    GKTurnBasedParticipant *_showcaseParticipant;
    NSIndexPath *_parentIndexPath;
}

@property(retain) <GKTurnBasedMatchDetailViewControllerDelegate> * delegate;
@property(retain) GKTurnBasedMatch * match;
@property(retain) NSMutableDictionary * players;
@property(retain) GKSectionArrayDataSource * matchDetailDataSource;
@property int matchStyle;
@property(retain) GKTurnBasedParticipant * showcaseParticipant;
@property(retain) NSIndexPath * parentIndexPath;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setParentIndexPath:(id)arg1;
- (id)parentIndexPath;
- (void)setShowcaseParticipant:(id)arg1;
- (id)showcaseParticipant;
- (id)matchDetailDataSource;
- (void)removeMatch;
- (void)setMatchDetailDataSource:(id)arg1;
- (id)finishedTitle;
- (void)quitMatch;
- (void)chooseMatch;
- (id)activeTitle;
- (id)buttonSectionWithTitles:(id)arg1 actions:(id)arg2;
- (void)declineInvitation;
- (void)acceptInvitation;
- (id)invitationTitle;
- (int)matchStyle;
- (void)setMatchStyle:(int)arg1;
- (id)players;
- (void)setMatch:(id)arg1;
- (id)match;
- (void)setPlayers:(id)arg1;
- (BOOL)usesCrossfade;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)prepareDataSource;

@end
