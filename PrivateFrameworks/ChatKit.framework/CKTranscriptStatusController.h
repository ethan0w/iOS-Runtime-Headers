/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSendingProgressView, UIView, NSString, CKConversation, NSTimer, NSMutableSet;

@interface CKTranscriptStatusController : NSObject  {
    UIView *_multipleRecipientTitleView;
    CKSendingProgressView *_statusView;
    NSString *_title;
    CKConversation *_conversation;
    float _lastVal;
    NSString *_lastMsg;
    NSTimer *_progressUpdateTimer;
    NSMutableSet *_currentMessages;
    BOOL _updatingProgress;
    BOOL _viewTitle;
    BOOL _finishingUp;
    id _delegate;
    BOOL _suspended;
}

@property id delegate;
@property(retain) CKConversation * conversation;
@property(copy) NSString * title;


- (void)resume;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)reset;
- (void)dealloc;
- (id)_generateStatusTitle;
- (float)_generateVal;
- (void)_finishProgress;
- (void)_refreshNavigationItemView;
- (BOOL)_calcVals:(BOOL*)arg1;
- (void)_refreshNavigationItemViewAnimate:(BOOL)arg1;
- (id)_statusView;
- (id)_localizedTitleForSendingPart:(int)arg1 ofPart:(int)arg2;
- (void)_startUpdatingProgress;
- (void)_updateNavItemTitleView:(BOOL)arg1;
- (BOOL)_shouldShowProgress;
- (void)_updateCurrentMessages;
- (void)_hideName;
- (void)_updateTitle:(BOOL)arg1;
- (void)setConversation:(id)arg1;
- (void)resetProgress;
- (id)conversation;
- (void)brieflyShowName;
- (id)_title;
- (id)title;
- (void)suspend;
- (void)setTitle:(id)arg1;
- (void)refresh;

@end
