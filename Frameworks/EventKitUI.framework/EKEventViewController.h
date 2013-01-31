/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, UIToolbar, _UIAccessDeniedView, UITableView, <EKEventViewDelegate>, UIActionSheet, UIBarButtonItem, NSString, EKEventDetailItem, EKEvent;

@interface EKEventViewController : UIViewController  {
    EKEvent *_event;
    NSString *_eventId;
    UIActionSheet *_alertSheet;
    int _pendingStatus;
    <EKEventViewDelegate> *_delegate;
    id _editor;
    UIBarButtonItem *_responseButtons[3];
    UIToolbar *_buttonBar;
    int _lastOrientation;
    id _currentEditItem;
    UITableView *_tableView;
    unsigned int _didAppear : 1;
    unsigned int _autoPop : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _allowsSubitems : 1;
    unsigned int _showsPreview : 1;
    unsigned int _forcePreview : 1;
    unsigned int _trustsStatus : 1;
    unsigned int _allowsInviteResponses : 1;
    unsigned int _showsAddToCalendar : 1;
    unsigned int _icsPreview : 1;
    unsigned int _needsReload : 1;
    unsigned int _showsDoneButton : 1;
    unsigned int _showsDelegateMessage : 1;
    NSArray *_items;
    NSArray *_currentSections;
    int _scrollToSection;
    BOOL _ignoreDBChanges;
    BOOL _showsTimeZone;
    int _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
}

@property <EKEventViewDelegate> * delegate;
@property(retain) EKEvent * event;
@property BOOL allowsEditing;
@property BOOL allowsCalendarPreview;
@property BOOL showsTimeZone;
@property BOOL ignoreDBChanges;
@property int lastAuthorizationStatus;
@property(retain) _UIAccessDeniedView * accessDeniedView;
@property(readonly) UITableView * tableView;
@property(retain) EKEventDetailItem * _currentEditItem;

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(float)arg2 numRowsInSection:(int)arg3 cellRow:(int)arg4;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (id)tableView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)accessibilityLargeTextDidChange;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setAccessDeniedView:(id)arg1;
- (void)setLastAuthorizationStatus:(int)arg1;
- (int)lastAuthorizationStatus;
- (void)setIgnoreDBChanges:(BOOL)arg1;
- (BOOL)ignoreDBChanges;
- (void)_responseChanged:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)viewControllerForEventItem:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (BOOL)_canDetachSingleOccurrence;
- (void)_presentValidationAlert:(id)arg1;
- (int)scrollToSection;
- (void)setScrollToSection:(int)arg1;
- (void)setShowsDelegateMessage:(BOOL)arg1;
- (BOOL)showsDoneButton;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (void)setICSPreview:(BOOL)arg1;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (BOOL)alwaysShowsCalendarPreview;
- (BOOL)allowsCalendarPreview;
- (id)initWithEvent:(id)arg1;
- (BOOL)allowsSubitems;
- (void)invokeInviteAction:(int)arg1;
- (void)_selectButtonWithTag:(int)arg1;
- (void)_declineButtonPressed:(id)arg1;
- (void)_maybeButtonPressed:(id)arg1;
- (void)_acceptButtonPressed:(id)arg1;
- (void)set_currentEditItem:(id)arg1;
- (void)_performDelete;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (struct CGSize { float x1; float x2; })_idealSize;
- (void)setShowsTimeZone:(BOOL)arg1;
- (BOOL)showsTimeZone;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_presentDetachSheet;
- (id)_currentEditItem;
- (void)_prepareEventForEdit;
- (void)_addToCalendarClicked:(id)arg1;
- (BOOL)isICSPreview;
- (BOOL)showsDelegateMessage;
- (BOOL)showsAddToCalendar;
- (void)_deleteClicked:(id)arg1;
- (void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_refreshEventAndReload;
- (void)completeWithAction:(int)arg1;
- (void)_pop;
- (void)_dismissEditor:(BOOL)arg1;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_setNeedsReload;
- (void)_setUpForEvent;
- (void)_reloadIfNeeded;
- (void)doneButtonPressed;
- (BOOL)_shouldDisplayDoneButton;
- (void)editEvent;
- (void)_localeChanged;
- (void)_updateFooterIfNeeded;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_teardownTableView;
- (void)_storeChanged:(id)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (id)accessDeniedView;
- (id)_items;

@end
