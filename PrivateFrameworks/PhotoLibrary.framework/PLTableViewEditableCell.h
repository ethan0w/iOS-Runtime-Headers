/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLTextView, UITextField, UILabel;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {
    PLTextView *_textView;
    UITextField *_textField;
    UILabel *_sizeTextLabel;
    id _delegate;
    BOOL _forceFirstResponder;
    int _cellStyle;
}

@property int style;

+ (id)posterCellIdentifier;

- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)sizeTextLabel;
- (void)forceFirstResponder:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellStyle:(int)arg2;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 multiLine:(BOOL)arg2;
- (void)_textFieldChanged;
- (id)value;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setValue:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)isEditing;
- (int)style;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (void)setPlaceholderText:(id)arg1;

@end
