/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKLocalPass, PKRemoteAddPassesViewController, _UIAsyncInvocation, NSDate, <PKAddPassesViewControllerDelegate>, NSURL;

@interface PKAddPassesViewController : UIViewController  {
    BOOL _viewHasAppeared;
    NSDate *_perfTestingForIngestion;
    PKRemoteAddPassesViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    PKLocalPass *_card;
    NSURL *_URL;
    int _previousStatusBarStyle;
    <PKAddPassesViewControllerDelegate> *_delegate;
}

@property <PKAddPassesViewControllerDelegate> * delegate;
@property(getter=_cancelViewServiceRequest,setter=_setCancelViewServiceRequest:,retain) _UIAsyncInvocation * _cancelViewServiceRequest;
@property(getter=_remoteViewController,setter=_setRemoteViewController:,retain) PKRemoteAddPassesViewController * _remoteViewController;
@property(getter=_card,setter=_setCard:,retain) PKLocalPass * _card;
@property(getter=_URL,setter=_setURL:,retain) NSURL * _URL;
@property(getter=_previousStatusBarStyle,setter=_setPreviousStatusBarStyle:) int _previousStatusBarStyle;

+ (BOOL)isAvailable;

- (void)_setURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (int)modalTransitionStyle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (int)modalPresentationStyle;
- (unsigned int)supportedInterfaceOrientations;
- (id)_cancelViewServiceRequest;
- (id)_remoteViewController;
- (int)_previousStatusBarStyle;
- (void)_setPreviousStatusBarStyle:(int)arg1;
- (id)initWithPass:(id)arg1 orURL:(id)arg2;
- (id)_card;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setCancelViewServiceRequest:(id)arg1;
- (void)_setCard:(id)arg1;
- (void)ingestionDidFinishWithResult:(int)arg1;
- (id)_URL;

@end
