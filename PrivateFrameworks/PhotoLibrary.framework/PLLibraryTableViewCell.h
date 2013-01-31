/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UILabel, NSString, <PLLibraryTableViewCellEditingDelegate>, UITextField;

@interface PLLibraryTableViewCell : UITableViewCell <UITextFieldDelegate> {
    UITextField *_editableRenameField;
    UILabel *_subtitleLabel;
    UIImageView *_unreadBadge;
    int _libraryCellEditStyle;
    int _libraryCellStyle;
    NSString *_subtitleText;
    BOOL _cellEnabled;
    BOOL _showsUnreadIndicator;
    BOOL _padForUnreadIndicator;
    <PLLibraryTableViewCellEditingDelegate> *_editingDelegate;
}

@property(retain) NSString * subtitleText;
@property BOOL showsUnreadIndicator;
@property BOOL padForUnreadIndicator;
@property int libraryCellEditStyle;
@property(getter=isRenaming,readonly) BOOL renaming;
@property BOOL cellEnabled;
@property <PLLibraryTableViewCellEditingDelegate> * editingDelegate;

+ (id)photoCountFormatter;

- (id)subtitleLabel;
- (void)dealloc;
- (BOOL)padForUnreadIndicator;
- (BOOL)showsUnreadIndicator;
- (id)subtitleText;
- (struct CGPoint { float x1; float x2; })destinationPointForMovePhotosAnimation;
- (void)animatePopRowWithDuration:(double)arg1 completion:(id)arg2;
- (void)endRenaming;
- (BOOL)isRenaming;
- (void)setPadForUnreadIndicator:(BOOL)arg1;
- (void)setShowsUnreadIndicator:(BOOL)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setText:(id)arg1 photoCount:(int)arg2 posterImage:(id)arg3;
- (void)setLibraryCellEditStyle:(int)arg1;
- (BOOL)cellEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editableFieldFrame;
- (int)libraryCellEditStyle;
- (void)setPadForUnreadIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_unreadBadgeFrame;
- (void)setShowsUnreadIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateSelectionStyle;
- (void)setCellEnabled:(BOOL)arg1;
- (id)initWithReuseIdentifier:(id)arg1 style:(int)arg2;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (id)editingDelegate;
- (void)setEditingDelegate:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;

@end
