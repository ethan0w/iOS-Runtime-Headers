/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIActivityIndicatorView, NSURLRequest, UIAlertView, GKBackgroundView, UIWebView, NSString, NSData;

@interface GKServerWebViewController : GKViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    GKBackgroundView *_backgroundView;
    UIWebView *_webView;
    NSString *_okCallback;
    NSString *_cancelCallback;
    NSString *_leftCallback;
    NSString *_rightCallback;
    BOOL _addedSheetFrame;
    NSString *_playerID;
    NSString *_authToken;
    NSURLRequest *_previousRequest;
    int _status;
    NSData *_pushToken;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _backgroundInsets;
    UIAlertView *_alert;
    BOOL _dismissOnAuthenticate;
    UIActivityIndicatorView *_rightNavSpinner;
    NSString *_rightButtonTitle;
    int _alertTag;
}

@property(retain) GKBackgroundView * backgroundView;
@property(retain) UIWebView * webView;
@property(retain) NSString * okCallback;
@property(retain) NSString * cancelCallback;
@property(retain) NSString * leftCallback;
@property(retain) NSString * rightCallback;
@property(retain) NSString * playerID;
@property(retain) NSString * authToken;
@property(retain) NSURLRequest * previousRequest;
@property int status;
@property(retain) NSData * pushToken;
@property BOOL addedSheetFrame;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property BOOL dismissOnAuthenticate;
@property(copy) id completionHandler;
@property(retain) UIActivityIndicatorView * rightNavSpinner;
@property(retain) UIAlertView * alert;
@property int alertTag;
@property(retain) NSString * rightButtonTitle;


- (void)dealloc;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setCompletionHandler:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)setWebView:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)webView;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)completionHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)dismissOnAuthenticate;
- (id)alert;
- (void)setAddedSheetFrame:(BOOL)arg1;
- (BOOL)addedSheetFrame;
- (id)previousRequest;
- (void)setAlertTag:(int)arg1;
- (id)okCallback;
- (id)cancelCallback;
- (int)alertTag;
- (void)setCancelCallback:(id)arg1;
- (void)setOkCallback:(id)arg1;
- (void)setAlert:(id)arg1;
- (id)rightButtonTitle;
- (void)setRightButtonTitle:(id)arg1;
- (id)rightCallback;
- (id)leftCallback;
- (void)rightNavButtonPressed;
- (void)leftNavButtonPressed;
- (void)setRightCallback:(id)arg1;
- (void)setLeftCallback:(id)arg1;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (void)updateNavBarForLoading:(BOOL)arg1;
- (void)setPreviousRequest:(id)arg1;
- (void)processSpinnerURLComponents:(id)arg1;
- (void)uploadContacts;
- (void)parseNavBarURLString:(id)arg1;
- (void)parseAlertURLString:(id)arg1;
- (void)webView:(id)arg1 processNativeCommand:(id)arg2;
- (void)startCommandProcessingForWebView:(id)arg1;
- (void)setPushToken:(id)arg1;
- (id)pushToken;
- (void)showMessageForError:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (id)rightNavSpinner;
- (void)setRightNavSpinner:(id)arg1;
- (void)cancelAlertWithoutDelegateCallback;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)decodeDashEncodedString:(id)arg1;
- (void)processGameKitURLComponents:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)finish;
- (void)setDismissOnAuthenticate:(BOOL)arg1;
- (id)playerID;
- (void)setPlayerID:(id)arg1;

@end
