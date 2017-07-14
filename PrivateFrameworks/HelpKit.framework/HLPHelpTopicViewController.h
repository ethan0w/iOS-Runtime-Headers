/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTopicViewController : UIViewController <HLPHelpLoadingViewDelegate, HLPHelpTopicViewControllerDelegate, UIGestureRecognizerDelegate, UIWebViewDelegate> {
    BOOL  _RTL;
    HLPURLSession * _URLSession;
    UIBarButtonItem * _backBarButtonItem;
    BOOL  _canShowTOC;
    HLPHelpTopicHistoryItem * _currentTopicHistoryItem;
    <HLPHelpTopicViewControllerDelegate> * _delegate;
    BOOL  _displayHelpTopicsOnly;
    UIBarButtonItem * _forwardBarButtonItem;
    HLPHelpBookController * _helpBookController;
    NSURL * _helpBookURL;
    BOOL  _hideDoneButton;
    id  _interactivePopGestureRecognizerDelegate;
    HLPHelpLoadingView * _loadingView;
    HLPHelpLocale * _locale;
    NSArray * _searchTerms;
    BOOL  _showTopicNameAsTitle;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIBarButtonItem * _tocBarButtonItem;
    NSCache * _topicCache;
    NSMutableArray * _topicHistory;
    HLPHelpUsageController * _usageController;
    UIWebView * _webView;
    BOOL  _webViewLoaded;
}

@property (nonatomic, retain) HLPHelpTopicHistoryItem *currentTopicHistoryItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HLPHelpTopicViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayHelpTopicsOnly;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) NSURL *helpBookURL;
@property (nonatomic) BOOL hideDoneButton;
@property (nonatomic, retain) HLPHelpLoadingView *loadingView;
@property (nonatomic, retain) HLPHelpLocale *locale;
@property (nonatomic, retain) NSArray *searchTerms;
@property (nonatomic) BOOL showTopicNameAsTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) HLPHelpUsageController *usageController;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)backButtonTapped;
- (id)currentTopicHistoryItem;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)dismissWelcomeHelpTopic;
- (BOOL)displayHelpTopicsOnly;
- (void)forwardButtonTapped;
- (id)helpBookController;
- (id)helpBookURL;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (BOOL)hideDoneButton;
- (id)init;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(int)arg4;
- (id)loadingView;
- (id)locale;
- (void)reloadCurrentTopic;
- (void)saveCurrentTopicItem;
- (id)searchTerms;
- (void)setCurrentTopicHistoryItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayHelpTopicsOnly:(BOOL)arg1;
- (void)setHelpBookController:(id)arg1;
- (void)setHelpBookURL:(id)arg1;
- (void)setHideDoneButton:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setShowTopicNameAsTitle:(BOOL)arg1;
- (void)setUsageController:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)showHelpBookInfo:(id)arg1;
- (void)showTableOfContent;
- (BOOL)showTopicNameAsTitle;
- (void)showWebViewDelay;
- (void)updateDoneButton;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;
- (void)updateNavigationButtons;
- (void)updateScrollPositionForCurrentTopicItem;
- (id)usageController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
