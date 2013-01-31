/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASScreenshotsViewController, ASApplicationPageView, UIActionSheet;

@interface ASSoftwarePageViewController : ASStructuredPageViewController <UIActionSheetDelegate, ISURLOperationDelegate> {
    ASApplicationPageView *_pageView;
    ASScreenshotsViewController *_screenshotsController;
    UIActionSheet *_shareDisambiguationSheet;
}


- (void)_restrictionsChangedNotification:(id)arg1;
- (id)newTermsAndConditionsFooter;
- (id)newDataSource;
- (id)newTableView;
- (void)reloadForChangedRowCount:(int)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (id)copyDefaultScriptProperties;
- (void)dealloc;
- (id)init;
- (id)_applicationIcon;
- (id)_tellAFriendBody;
- (id)_tellAFriendSubject;
- (id)_newContentRatingOperationForContentRating:(id)arg1;
- (id)_newApplicationIconOperationForItemImage:(id)arg1;
- (void)_reloadAfterRestrictionsChanged;
- (void)_destroyShareDisambiguationSheet;
- (void)_delayedClearSelection;
- (void)_showTellAFriendMailCompose;
- (void)_showTweetSheet;
- (void)_showShareDisambiguationSheet;
- (id)_activeItem;
- (void)_pushStorePageWithURL:(id)arg1;
- (id)_contentRatingImageURL;
- (id)_applicationIconURL;
- (BOOL)_canDisplayPage:(id)arg1 error:(id*)arg2;
- (void)_updatePageView;
- (void)_cancelShareDisambiguationSheet;
- (void)cellWasTapped:(id)arg1 forUserAgreement:(id)arg2;
- (void)shareButtonWasTapped:(id)arg1;
- (void)buttonWasTapped:(id)arg1 forReviews:(id)arg2;
- (void)reportAProblemButtonWasTapped:(id)arg1;
- (void)moreInfoCellWasTapped:(id)arg1;
- (id)_contentRatingImage;
- (id)_itemArtworkImage;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

@end
