/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaActionButtonsCell, IUMediaAlertView, IUMediaActionSheet;

@interface IUOnTheGoViewController : IUMusicViewController <IUMediaActionButtonsCellDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UITextFieldDelegate> {
    IUMediaActionButtonsCell *_buttonsCell;
    IUMediaActionSheet *_confirmPlaylistChangeSheet;
    IUMediaAlertView *_renamePlaylistAlert;
}


- (void)_confirmClearPlaylist;
- (void)_handleRename;
- (void)_handleDelete;
- (void)_handleClear;
- (void)_presentModalContextWithDefaultIdentifier:(id)arg1;
- (void)_updateCloudPlaylist;
- (void)_addButtonAction:(id)arg1;
- (id)_buttonsCellButtonTitlesForCurrentState;
- (BOOL)handleTabBarSelectedViewController:(id)arg1;
- (void)_confirmDeletePlaylist;
- (void)modalContextWillDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)configureNavigationItem:(id)arg1;
- (void)_backingStoreChangedNotification:(id)arg1;
- (void)mediaActionButtonsCell:(id)arg1 clickedButtonAtIndex:(unsigned int)arg2;
- (BOOL)hasSearchBar;
- (void)reloadActionRows;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setContext:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;

@end
