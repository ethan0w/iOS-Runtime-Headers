/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonViewControllerHelper, UIView, ABPersonTableViewSharingDelegate, NSString, <ABStyleProvider>, <ABUnknownPersonViewControllerDelegate>, NSArray;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
    id _helper;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    id _reserved;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
}

@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsConferencing;
@property(retain) UIView * personHeaderView;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property(copy) NSString * attribution;
@property(readonly) BOOL canShareContact;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property BOOL isLocation;
@property BOOL allowsSharing;
@property BOOL savesNewContactOnSuspend;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) ABPersonViewControllerHelper * helper;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(copy) NSArray * displayedProperties;
@property(readonly) BOOL isShowingMultipleVCards;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void)dealloc;
- (id)init;
- (void*)addressBook;
- (void*)displayedPerson;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (id)initWithVCardData:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setPrimaryProperty:(int)arg1;
- (void)updateNavigationButtons;
- (id)message;
- (void)dismissAnimated:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (id)dataSource;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)messageFont;
- (void)setAddressBook:(void*)arg1;
- (void)setCustomAppearanceProvider:(id)arg1;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)newActionButton;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentShareContactSheet;
- (void)presentAddToContactsSheet;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)_unselectTable;
- (void)_showCardViewerForIndex:(int)arg1;
- (id)_viewControllerForCardAtIndex:(int)arg1;
- (BOOL)isShowingMultipleVCards;
- (void)_addUnmergedRecords;
- (id)_unmergedAlertSheet;
- (void)_addToExistingContacts;
- (void)_createNewContacts;
- (id)_alertSheet;
- (void)_showUnmergedContactsAlert;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (id)_vCardProperties;
- (id)_unmergedRecords;
- (id)unknownPersonViewDelegate;
- (id)_forwarder;
- (id)_vCardTable;
- (id)_vCards;
- (void)setIsLocation:(BOOL)arg1;
- (BOOL)isLocation;
- (BOOL)canShareContact;
- (void)reloadImageData;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setStringValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)allowsSendingTextMessage;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsAddingToAddressBook;
- (void)setAlternateName:(id)arg1;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setAttribution:(id)arg1;
- (id)customFooterView;
- (void)setCustomFooterView:(id)arg1;
- (id)customHeaderView;
- (void)setCustomHeaderView:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (id)willWeiboLocationCallback;
- (void)setWillTweetLocationCallback:(id)arg1;
- (id)willTweetLocationCallback;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationURL:(id)arg1;
- (id)shareLocationURL;
- (void)setShareMessageSubject:(id)arg1;
- (id)shareMessageSubject;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (BOOL)shareMessageBodyIsHTML;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)attribution;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (id)personHeaderView;
- (void)setPersonHeaderView:(id)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (id)customMessageView;
- (void)setMessageDetailFont:(id)arg1;
- (id)messageDetailFont;
- (id)messageDetail;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (BOOL)allowsSharing;
- (id)sharingDelegate;
- (id)actionsDelegate;
- (BOOL)savesNewContactOnSuspend;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (void)accessChanged;
- (id)helper;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (int)abViewControllerType;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (BOOL)allowsActions;
- (id)displayedProperties;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (id)alternateName;
- (id)_mf_initWithEmailAddress:(id)arg1;

@end
