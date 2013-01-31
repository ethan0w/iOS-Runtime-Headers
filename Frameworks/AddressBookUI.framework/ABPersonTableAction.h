/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, UIView, NSString, <ABPersonTableActionDelegate>;

@interface ABPersonTableAction : NSObject <ABStyleProviding> {
    NSString *_title;
    NSString *_shortTitle;
    BOOL _displaysShortTitle;
    BOOL _indicatesFaceTimeHistory;
    NSString *_detailText;
    NSString *_differentiationSheetTitle;
    BOOL _allowDifferentiationSheet;
    id _target;
    SEL _selector;
    int _style;
    int _property;
    struct __CFArray { } *_properties;
    int _grouping;
    int _ordering;
    UIButton *_button;
    UIButton *_FMFButton;
    UIView *_customContentView;
    <ABPersonTableActionDelegate> *_delegate;
}

@property <ABPersonTableActionDelegate> * delegate;
@property int grouping;
@property int ordering;
@property(readonly) UIButton * button;
@property(readonly) UIButton * existingButton;
@property(readonly) NSString * title;
@property(readonly) NSString * shortTitle;
@property BOOL displaysShortTitle;
@property(readonly) NSString * detailText;
@property(readonly) int style;
@property(readonly) id target;
@property(readonly) SEL selector;
@property(readonly) int property;
@property struct __CFArray { }* properties;
@property(copy) NSString * differentiationSheetTitle;
@property BOOL allowDifferentiationSheet;
@property BOOL indicatesFaceTimeHistory;
@property(retain) UIView * actionContentView;


- (id)button;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (id)target;
- (id)description;
- (void)dealloc;
- (void)setGrouping:(int)arg1;
- (int)grouping;
- (struct __CFArray { }*)properties;
- (SEL)selector;
- (int)style;
- (id)title;
- (int)property;
- (void)setOrdering:(int)arg1;
- (id)existingButton;
- (id)detailText;
- (BOOL)displaysShortTitle;
- (id)shortTitle;
- (void)setAllowDifferentiationSheet:(BOOL)arg1;
- (BOOL)allowDifferentiationSheet;
- (void)setDifferentiationSheetTitle:(id)arg1;
- (id)differentiationSheetTitle;
- (BOOL)indicatesFaceTimeHistory;
- (void)prepareButton:(id)arg1 forValueAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)setFMFActionButton:(id)arg1;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1;
- (void)modifyDetailText:(id)arg1;
- (int)compareOrderingToAction:(id)arg1;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5;
- (void)performWithSender:(id)arg1 person:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setDisplaysShortTitle:(BOOL)arg1;
- (int)ordering;
- (void)buttonClicked:(id)arg1;
- (void)setActionContentView:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 style:(int)arg3 target:(id)arg4 selector:(SEL)arg5;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)actionContentView;
- (id)styleProvider;

@end
