/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem {
    <CKTranscriptBalloonPluginController> * _balloonController;
    IMTranscriptPluginChatItem * _imTranscriptPluginChatItem;
    BOOL  _isAppearing;
    BOOL  _isHandwriting;
}

@property (nonatomic, readonly) IMTranscriptPluginChatItem *IMChatItem;
@property (nonatomic) <CKTranscriptBalloonPluginController> *balloonController;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic, readonly) UIView<CKTranscriptPluginView> *extensableView;
@property (nonatomic, retain) IMTranscriptPluginChatItem *imTranscriptPluginChatItem;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic, readonly) BOOL isHandwriting;
@property (nonatomic, readonly) BOOL isInteractive;
@property (nonatomic, readonly) BOOL isPlayed;
@property (nonatomic, readonly) BOOL isSaved;
@property (nonatomic, readonly) BOOL wantsBalloonGradient;
@property (nonatomic, readonly) BOOL wantsOutline;
@property (nonatomic, readonly) BOOL wantsTranscriptGroupMonograms;

- (void).cxx_destruct;
- (id)balloonController;
- (Class)balloonViewClass;
- (BOOL)canCopy;
- (BOOL)canForward;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)composition;
- (id)contact;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)contentViewController;
- (id)extensableView;
- (BOOL)handlePresentationAction;
- (BOOL)hasTail;
- (id)imTranscriptPluginChatItem;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (BOOL)isAppearing;
- (BOOL)isHandwriting;
- (BOOL)isInteractive;
- (BOOL)isPlayed;
- (BOOL)isSaved;
- (struct CGSize { float x1; float x2; })loadSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (id)menuTitle;
- (id)message;
- (id)pasteboardItems;
- (void)pluginContentViewDidDisappear;
- (void)pluginContentViewWillAppear;
- (void)releaseBalloonControllerIfNeeded;
- (void)relinquishBalloonController;
- (id)sender;
- (void)setBalloonController:(id)arg1;
- (void)setImTranscriptPluginChatItem:(id)arg1;
- (void)setIsAppearing:(BOOL)arg1;
- (BOOL)shouldSnapshot;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (BOOL)transcriptOrientation;
- (BOOL)wantsBalloonGradient;
- (BOOL)wantsDrawerLayout;
- (BOOL)wantsOutline;
- (BOOL)wantsTranscriptGroupMonograms;

@end
