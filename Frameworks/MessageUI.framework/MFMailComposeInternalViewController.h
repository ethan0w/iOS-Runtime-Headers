/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class _UIAsyncInvocation, NSError, MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, <MFMailComposeViewControllerDelegate>, NSMutableArray, XPCProxy<MFMailComposeRemoteService>, NSString, NSMutableDictionary;

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate> {
    <MFMailComposeViewControllerDelegate> *_mailComposeDelegate;
    id _autorotationDelegate;
    MFMailComposePlaceholderViewController *_placeholderViewController;
    MFMailComposeRemoteViewController *_serviceViewController;
    _UIAsyncInvocation *_cancellationInvocation;
    XPCProxy<MFMailComposeRemoteService> *_serviceViewControllerProxy;
    NSMutableDictionary *_compositionValues;
    NSMutableArray *_attachments;
    NSString *_placeholderSubject;
    int _composeResult;
    NSError *_composeResultError;
    double _presentationDelayBeganTimestamp;
    unsigned int _hasDelayedPresentation : 1;
    unsigned int _didEndDelayedPresentation : 1;
    unsigned int _compositionValuesAreFinalized : 1;
    unsigned int _remoteViewControllerIsConfigured : 1;
    unsigned int _isAppearing : 1;
    unsigned int _didAppear : 1;
    unsigned int _didFinish : 1;
    unsigned int _delegateRespondsToBodyFinishedLoadingWithResult : 1;
}

@property <MFMailComposeViewControllerDelegate> * mailComposeDelegate;
@property id autorotationDelegate;


- (void)autosaveWithHandler:(id)arg1;
- (void)dealloc;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setURL:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)willMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)compositionViewServiceTerminatedWithError:(id)arg1;
- (void)_setPlaceHolderSubject:(id)arg1;
- (void)_setCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_endDelayingCompositionPresentation;
- (void)compositionFinishedWithResult:(int)arg1 error:(id)arg2;
- (void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg1;
- (void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg1;
- (void)_configureRemoteViewContoller;
- (void)_didEndDelayingCompositionPresentation;
- (void)_beginDelayingCompositionPresenation;
- (void)_notifyCompositionDidFinish;
- (void)_cancelComposition:(id)arg1;
- (void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg1;
- (void)_serviceViewControllerReady:(id)arg1 error:(id)arg2;
- (id)mailComposeDelegate;
- (void)finalizeCompositionValues;
- (id)autorotationDelegate;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;

@end
