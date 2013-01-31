/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSMSComposeRemoteViewController, _UIAsyncInvocation, UINavigationController, CKSMSComposeQueuingRemoteViewControllerProxy;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {
    id _delegate;
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    BOOL _safeToAdd;
    CKSMSComposeRemoteViewController *_remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;
}

@property id delegate;
@property(retain) CKSMSComposeRemoteViewController * remoteViewController;
@property(retain) CKSMSComposeQueuingRemoteViewControllerProxy * remoteViewControllerProxy;

+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForVideo;
+ (BOOL)acceptsMIMEType:(id)arg1;
+ (double)maxTrimDurationForAudio;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)disableCameraAttachments;
- (void)_addRemoteVCIfNeeded;
- (id)remoteViewControllerProxy;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)forceCancelComposition;
- (void)setUICustomizationData:(id)arg1;
- (void)setText:(id)arg1 addresses:(id)arg2;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerAppeared;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (BOOL)insertTextPart:(id)arg1;
- (void)smsComposeControllerDataInserted;
- (void)setCanEditRecipients:(BOOL)arg1;
- (id)initWithNavigationController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)remoteViewController;

@end
