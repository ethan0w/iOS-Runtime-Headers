/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSIndexPath, UITableViewCell, MPMediaLibrary, NSDate, IUSharedLibraryCellLayoutManager;

@interface IUSharedLibrariesViewController : IUMediaListViewController  {
    NSDate *_connectionStartDate;
    IUSharedLibraryCellLayoutManager *_layoutManager;
    UITableViewCell *_moreListTableViewCell;
    NSIndexPath *_selectedIndexPath;
    MPMediaLibrary *_selectedLibrary;
    BOOL _showsSectionHeader;
}

@property BOOL showsSectionHeader;

+ (Class)tableViewCellClass;
+ (id)tableViewBackgroundColor;

- (void)setShowsSectionHeader:(BOOL)arg1;
- (BOOL)showsSectionHeader;
- (BOOL)hideActionRowsOnAppear;
- (BOOL)hasSearchBar;
- (BOOL)shouldBeCustomizableInTabBar;
- (void)performDefaultActionForRow:(int)arg1;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (void)_selectLibrary:(id)arg1;
- (void)_updateConnectionProgressForCellAtIndexPath:(id)arg1;
- (void)_updateNoSharedLibrariesViewAnimated:(BOOL)arg1;
- (void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
- (void)_cancelAndDismiss:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)moreListTableCell;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
