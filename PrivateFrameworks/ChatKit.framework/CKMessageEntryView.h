/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryView : UIView <CKActionMenuControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKAudioRecorderDelegate, CKInlineAudioReplyButtonDelegate, CKMessageEntryContentViewDelegate, CKMessageEntryRecordedAudioViewDelegate, CKMessageEntryViewStyleProtocol, UIGestureRecognizerDelegate, _UIBackdropViewGraphicsQualityChangeDelegate> {
    CKEntryViewButton * _arrowButton;
    CKActionMenuController * _audioActionMenuController;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _audioActionMenuFrame;
    CKActionMenuGestureRecognizerButton * _audioActionMenuGestureRecognizerButton;
    CKEntryViewButton * _audioButton;
    CKComposition * _audioComposition;
    CKMessageEntryAudioHintView * _audioHintView;
    CKInlineAudioReplyButtonController * _audioReplyButton;
    _UIBackdropView * _backdropView;
    CKEntryViewButton * _browserButton;
    BOOL  _characterCountHidden;
    UILabel * _characterCountLabel;
    struct CGSize { 
        float width; 
        float height; 
    }  _characterCountSize;
    UILabel * _collpasedPlaceholderLabel;
    BOOL  _composingRecipient;
    UIView * _contentClipView;
    CKMessageEntryContentView * _contentView;
    CKConversation * _conversation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _coverInsets;
    <CKMessageEntryViewDelegate><UIPreviewInteractionDelegate> * _delegate;
    CKEntryViewButton * _digitalTouchButton;
    BOOL  _disablePluginButtons;
    unsigned int  _displayMode;
    CKScheduledUpdater * _entryFieldCollapsedUpdater;
    BOOL  _entryFieldUpdaterAnimatedValue;
    BOOL  _entryFieldUpdaterCollapsedValue;
    BOOL  _failedRecipients;
    UIView * _inputButtonContainerView;
    struct CGSize { 
        float width; 
        float height; 
    }  _inputButtonSize;
    <CKMessageEntryViewInputDelegate> * _inputDelegate;
    NSArray * _keyCommands;
    BOOL  _keyboardVisible;
    UIView * _knockoutCoverView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _marginInsets;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panAnimationStartPosition;
    double  _panStartTime;
    BOOL  _performingActionMenuSend;
    CKEntryViewButton * _photoButton;
    <UIPreviewInteractionDelegate> * _previewInteractionDelegate;
    CKMessageEntryRecordedAudioView * _recordedAudioView;
    CKAudioRecorder * _recorder;
    CKEntryViewButton * _sendButton;
    UILongPressGestureRecognizer * _sendButtonLongPressGestureRecognizer;
    UIPreviewInteraction * _sendButtonPreviewInteraction;
    struct CGSize { 
        float width; 
        float height; 
    }  _sendButtonSize;
    BOOL  _sendingMessage;
    BOOL  _shouldAllowImpactSend;
    BOOL  _shouldCenterCharacterCount;
    BOOL  _shouldConfigureForFullscreenAppView;
    BOOL  _shouldEntryViewBeExpanded;
    BOOL  _shouldKnockoutCoverView;
    BOOL  _shouldShowCharacterCount;
    BOOL  _shouldShowPluginButtons;
    BOOL  _shouldShowSendButton;
    BOOL  _shouldShowSubject;
    CAMShutterButton * _shutterButton;
    int  _style;
    BOOL  _unreachableEmergencyRecipient;
    CKMessageEntryWaveformView * _waveformView;
    struct CGSize { 
        float width; 
        float height; 
    }  _waveformViewSize;
}

@property (nonatomic, retain) CKEntryViewButton *arrowButton;
@property (nonatomic, retain) CKActionMenuController *audioActionMenuController;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } audioActionMenuFrame;
@property (nonatomic, retain) CKActionMenuGestureRecognizerButton *audioActionMenuGestureRecognizerButton;
@property (nonatomic, retain) CKEntryViewButton *audioButton;
@property (nonatomic, retain) CKComposition *audioComposition;
@property (nonatomic, retain) CKMessageEntryAudioHintView *audioHintView;
@property (nonatomic, retain) CKInlineAudioReplyButtonController *audioReplyButton;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) CKEntryViewButton *browserButton;
@property (getter=isCharacterCountHidden, nonatomic) BOOL characterCountHidden;
@property (nonatomic, retain) UILabel *characterCountLabel;
@property (nonatomic) struct CGSize { float x1; float x2; } characterCountSize;
@property (nonatomic, retain) UILabel *collpasedPlaceholderLabel;
@property (getter=isComposingRecipient, nonatomic) BOOL composingRecipient;
@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, readonly) CKComposition *compositionWithAcceptedAutocorrection;
@property (nonatomic, retain) UIView *contentClipView;
@property (nonatomic, retain) CKMessageEntryContentView *contentView;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } coverInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMessageEntryViewDelegate><UIPreviewInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKEntryViewButton *digitalTouchButton;
@property (getter=shouldDisablePluginButtons, nonatomic) BOOL disablePluginButtons;
@property (nonatomic) unsigned int displayMode;
@property BOOL entryFieldCollapsed;
@property (nonatomic, retain) CKScheduledUpdater *entryFieldCollapsedUpdater;
@property (nonatomic) BOOL entryFieldUpdaterAnimatedValue;
@property (nonatomic) BOOL entryFieldUpdaterCollapsedValue;
@property (getter=hasFailedRecipients, nonatomic) BOOL failedRecipients;
@property (nonatomic, readonly) BOOL hasRecording;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *inputButtonContainerView;
@property (nonatomic) struct CGSize { float x1; float x2; } inputButtonSize;
@property (nonatomic) <CKMessageEntryViewInputDelegate> *inputDelegate;
@property (nonatomic, readonly) BOOL isAudioActionMenuVisible;
@property (nonatomic, copy) NSArray *keyCommands;
@property (getter=isKeyboardVisible, nonatomic) BOOL keyboardVisible;
@property (nonatomic, retain) UIView *knockoutCoverView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } marginInsets;
@property (nonatomic) struct CGPoint { float x1; float x2; } panAnimationStartPosition;
@property (nonatomic) double panStartTime;
@property (getter=isPerformingActionMenuSend, nonatomic) BOOL performingActionMenuSend;
@property (nonatomic, retain) CKEntryViewButton *photoButton;
@property (nonatomic) <UIPreviewInteractionDelegate> *previewInteractionDelegate;
@property (nonatomic, retain) CKMessageEntryRecordedAudioView *recordedAudioView;
@property (nonatomic, retain) CKAudioRecorder *recorder;
@property (getter=isRecording, nonatomic, readonly) BOOL recording;
@property (nonatomic, retain) CKEntryViewButton *sendButton;
@property (nonatomic, retain) UILongPressGestureRecognizer *sendButtonLongPressGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *sendButtonPreviewInteraction;
@property (nonatomic) struct CGSize { float x1; float x2; } sendButtonSize;
@property (getter=isSendingMessage, nonatomic) BOOL sendingMessage;
@property (nonatomic) BOOL shouldAllowImpactSend;
@property (nonatomic) BOOL shouldCenterCharacterCount;
@property (nonatomic) BOOL shouldConfigureForFullscreenAppView;
@property (nonatomic) BOOL shouldEntryViewBeExpanded;
@property (nonatomic) BOOL shouldHideBackgroundView;
@property (nonatomic) BOOL shouldKnockoutCoverView;
@property (nonatomic) BOOL shouldShowCharacterCount;
@property (nonatomic) BOOL shouldShowPluginButtons;
@property (nonatomic) BOOL shouldShowSendButton;
@property (nonatomic) BOOL shouldShowSubject;
@property (nonatomic, retain) CAMShutterButton *shutterButton;
@property (nonatomic) int style;
@property (readonly) Class superclass;
@property (getter=hasUnreachableEmergencyRecipient, nonatomic) BOOL unreachableEmergencyRecipient;
@property (nonatomic, retain) CKMessageEntryWaveformView *waveformView;
@property (nonatomic) struct CGSize { float x1; float x2; } waveformViewSize;

+ (id)_imageNamesForPrecaching;
+ (id)audioButtonImage;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsetsForMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 shouldShowPluginButtons:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 shouldCoverSendButton:(BOOL)arg4;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })coverViewInsetsForMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 shouldShowPluginButtons:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })coverViewInsetsForMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 shouldShowPluginButtons:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 shouldCenterCharacterCount:(BOOL*)arg4;

- (void).cxx_destruct;
- (float)_accessoryViewFadeDuration;
- (void)_animateCollapseInteractive:(BOOL)arg1;
- (void)_animateExpand;
- (void)_setupWaveformView;
- (BOOL)_shouldNotAnimateCollapseInteractive;
- (void)_updateUIForEntryFieldCollapsedStateChange;
- (void)actionMenuControllerDidDismissActionMenu:(id)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(BOOL)arg2;
- (void)actionMenuControllerWillPresentActionMenu:(id)arg1 animated:(BOOL)arg2;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (id)arrowButton;
- (void)arrowButtonTapped:(id)arg1;
- (void)arrowCollapsePanGestureRecongnized:(id)arg1;
- (id)audioActionMenuController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })audioActionMenuFrame;
- (id)audioActionMenuGestureRecognizerButton;
- (id)audioButton;
- (id)audioComposition;
- (id)audioHintView;
- (void)audioMenuItemAction:(id)arg1;
- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidChange:(id)arg1;
- (void)audioRecorderRecordingDidFail:(id)arg1;
- (id)audioReplyButton;
- (void)audioReplyButtonCancel:(id)arg1;
- (void)audioReplyButtonStart:(id)arg1;
- (void)audioReplyButtonStop:(id)arg1;
- (id)backdropView;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2;
- (void)beginDeferringEntryFieldCollapsedStateChanges;
- (id)browserButton;
- (void)browserButtonTapped:(id)arg1;
- (void)cancelRecordingAndShowAudioHint;
- (id)characterCountLabel;
- (struct CGSize { float x1; float x2; })characterCountSize;
- (void)clearResponseContext;
- (void)collapseGestureRecongnized;
- (id)collpasedPlaceholderLabel;
- (void)collpasedPlaceholderLabelTapped:(id)arg1;
- (id)composition;
- (id)compositionWithAcceptedAutocorrection;
- (void)configureAudioActionMenuControllerForPlayback:(BOOL)arg1;
- (void)configureForDisplayMode:(unsigned int)arg1;
- (id)contentClipView;
- (id)contentView;
- (id)conversation;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })coverFrameThatFitsInSize:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })coverInsets;
- (void)dealloc;
- (id)delegate;
- (id)digitalTouchButton;
- (void)digitalTouchButtonTapped:(id)arg1;
- (void)dismissAudioActionMenuAnimated:(BOOL)arg1;
- (unsigned int)displayMode;
- (void)endDeferringEntryFieldCollapsedStateChanges;
- (BOOL)entryFieldCollapsed;
- (id)entryFieldCollapsedUpdater;
- (BOOL)entryFieldUpdaterAnimatedValue;
- (BOOL)entryFieldUpdaterCollapsedValue;
- (void)expandGestureRecongnized;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)hasFailedRecipients;
- (BOOL)hasRecording;
- (BOOL)hasUnreachableEmergencyRecipient;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initForFullscreenAppViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 shouldAllowImpact:(BOOL)arg3 shouldShowSendButton:(BOOL)arg4 shouldShowSubject:(BOOL)arg5 shouldShowBrowserButton:(BOOL)arg6 shouldShowCharacterCount:(BOOL)arg7;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 shouldAllowImpact:(BOOL)arg3 shouldShowSendButton:(BOOL)arg4 shouldShowSubject:(BOOL)arg5 shouldShowPluginButtons:(BOOL)arg6 shouldShowCharacterCount:(BOOL)arg7;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 marginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 shouldShowSendButton:(BOOL)arg3 shouldShowSubject:(BOOL)arg4 shouldShowPluginButtons:(BOOL)arg5 shouldShowCharacterCount:(BOOL)arg6;
- (id)inputButtonContainerView;
- (struct CGSize { float x1; float x2; })inputButtonSize;
- (id)inputDelegate;
- (BOOL)isAudioActionMenuVisible;
- (BOOL)isCharacterCountHidden;
- (BOOL)isComposingRecipient;
- (BOOL)isKeyboardVisible;
- (BOOL)isPerformingActionMenuSend;
- (BOOL)isRecording;
- (BOOL)isSendingMessage;
- (void)keyCommandSend:(id)arg1;
- (id)keyCommands;
- (id)knockoutCoverView;
- (void)layoutSubviews;
- (void)loadRecordedAudioViewsIfNeeded;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })marginInsets;
- (void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
- (void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
- (BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
- (struct CGSize { float x1; float x2; })messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
- (BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
- (void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)messageReceived:(id)arg1;
- (struct CGPoint { float x1; float x2; })panAnimationStartPosition;
- (double)panStartTime;
- (void)pauseMenuItemAction:(id)arg1;
- (id)photoButton;
- (void)photoButtonTapped:(id)arg1;
- (float)placeholderHeight;
- (void)playMenuItemAction:(id)arg1;
- (BOOL)pluginButtonsEnabled;
- (void)presentAudioActionMenu;
- (id)previewInteractionDelegate;
- (id)recordedAudioView;
- (id)recorder;
- (id)sendButton;
- (struct CGPoint { float x1; float x2; })sendButtonConvertPointToScreen:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)sendButtonEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sendButtonFrameInScreenCoordinates;
- (void)sendButtonLongPressGesture:(id)arg1;
- (id)sendButtonLongPressGestureRecognizer;
- (id)sendButtonPreviewInteraction;
- (struct CGSize { float x1; float x2; })sendButtonSize;
- (void)sendCurrentLocationMessage;
- (void)sendMenuItemAction:(id)arg1;
- (void)setArrowButton:(id)arg1;
- (void)setAudioActionMenuController:(id)arg1;
- (void)setAudioActionMenuFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAudioActionMenuGestureRecognizerButton:(id)arg1;
- (void)setAudioButton:(id)arg1;
- (void)setAudioComposition:(id)arg1;
- (void)setAudioHintView:(id)arg1;
- (void)setAudioReplyButton:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBrowserButton:(id)arg1;
- (void)setCharacterCountHidden:(BOOL)arg1;
- (void)setCharacterCountLabel:(id)arg1;
- (void)setCharacterCountSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCollpasedPlaceholderLabel:(id)arg1;
- (void)setComposingRecipient:(BOOL)arg1;
- (void)setComposition:(id)arg1;
- (void)setContentClipView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setCoverInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitalTouchButton:(id)arg1;
- (void)setDisablePluginButtons:(BOOL)arg1;
- (void)setDisplayMode:(unsigned int)arg1;
- (void)setEntryFieldCollapsed:(BOOL)arg1;
- (void)setEntryFieldCollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEntryFieldCollapsedUpdater:(id)arg1;
- (void)setEntryFieldUpdaterAnimatedValue:(BOOL)arg1;
- (void)setEntryFieldUpdaterCollapsedValue:(BOOL)arg1;
- (void)setFailedRecipients:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputButtonContainerView:(id)arg1;
- (void)setInputButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setKeyCommands:(id)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)setKnockoutCoverView:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPanAnimationStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanStartTime:(double)arg1;
- (void)setPerformingActionMenuSend:(BOOL)arg1;
- (void)setPhotoButton:(id)arg1;
- (void)setPreviewInteractionDelegate:(id)arg1;
- (void)setRecordedAudioView:(id)arg1;
- (void)setRecorder:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setSendButtonLongPressGestureRecognizer:(id)arg1;
- (void)setSendButtonPreviewInteraction:(id)arg1;
- (void)setSendButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSendingMessage:(BOOL)arg1;
- (void)setShouldAllowImpactSend:(BOOL)arg1;
- (void)setShouldCenterCharacterCount:(BOOL)arg1;
- (void)setShouldConfigureForFullscreenAppView:(BOOL)arg1;
- (void)setShouldEntryViewBeExpanded:(BOOL)arg1;
- (void)setShouldHideBackgroundView:(BOOL)arg1;
- (void)setShouldKnockoutCoverView:(BOOL)arg1;
- (void)setShouldShowCharacterCount:(BOOL)arg1;
- (void)setShouldShowPluginButtons:(BOOL)arg1;
- (void)setShouldShowSendButton:(BOOL)arg1;
- (void)setShouldShowSubject:(BOOL)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setUnreachableEmergencyRecipient:(BOOL)arg1;
- (void)setWaveformView:(id)arg1;
- (void)setWaveformViewSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldAllowImpactSend;
- (BOOL)shouldCenterCharacterCount;
- (BOOL)shouldConfigureForFullscreenAppView;
- (BOOL)shouldDisablePluginButtons;
- (BOOL)shouldEntryViewBeExpanded;
- (BOOL)shouldHideBackgroundView;
- (BOOL)shouldKnockoutCoverView;
- (BOOL)shouldRecordForService:(id)arg1;
- (BOOL)shouldShowCharacterCount;
- (BOOL)shouldShowPluginButtons;
- (BOOL)shouldShowSendButton;
- (BOOL)shouldShowSubject;
- (id)shutterButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startRecordingForRaiseGesture;
- (void)stopRecordingForRaiseGestureWithFailure:(BOOL)arg1;
- (int)style;
- (void)touchUpInsideDeleteAudioRecordingButton:(id)arg1;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)updateEntryView;
- (void)updateResponseContext;
- (void)updateTextViewsForShouldHideCaret:(BOOL)arg1;
- (id)waveformView;
- (struct CGSize { float x1; float x2; })waveformViewSize;

@end
