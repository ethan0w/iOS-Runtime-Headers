/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFormAccessory : UIInputView {
    UIBarButtonItem * _autofill;
    UIBarButtonItemGroup * _buttonGroupAutoFill;
    UIBarButtonItemGroup * _buttonGroupNavigation;
    UIBarButtonItem * _clearButton;
    UIBarButtonItem * _doneButton;
    UIBarButtonItem * _flexibleSpaceItem;
    UIToolbar * _leftToolbar;
    UIBarButtonItem * _nextItem;
    UIBarButtonItem * _previousItem;
    UIToolbar * _rightToolbar;
    UISegmentedControl * _tab;
    BOOL  _usesUCB;
    <UIWebFormAccessoryDelegate> * delegate;
}

@property (nonatomic, retain) UIBarButtonItem *_autofill;
@property (nonatomic, retain) UIBarButtonItem *_clearButton;
@property (nonatomic, retain) UISegmentedControl *_tab;
@property (nonatomic) <UIWebFormAccessoryDelegate> *delegate;
@property (getter=isNextEnabled, nonatomic) BOOL nextEnabled;
@property (getter=isPreviousEnabled, nonatomic) BOOL previousEnabled;

+ (id)toolbarWithItems:(id)arg1;

- (void)_applyTreatmentToAutoFillLabel;
- (id)_autoFillButton;
- (id)_autofill;
- (id)_clearButton;
- (void)_nextTapped:(id)arg1;
- (void)_orientationDidChange:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_refreshAutofillPresentation;
- (void)_setRenderConfig:(id)arg1;
- (id)_tab;
- (void)_tabSegmentedControlDidChange:(id)arg1;
- (void)_updateFrame;
- (void)autoFill:(id)arg1;
- (void)clear:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (void)hideAutoFillButton;
- (void)initForUCB:(id)arg1;
- (id)initWithInputAssistantItem:(id)arg1;
- (BOOL)isNextEnabled;
- (BOOL)isPreviousEnabled;
- (void)layoutSubviews;
- (void)setClearVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextEnabled:(BOOL)arg1;
- (void)setPreviousEnabled:(BOOL)arg1;
- (void)set_autofill:(id)arg1;
- (void)set_clearButton:(id)arg1;
- (void)set_tab:(id)arg1;
- (void)showAutoFillButton;
- (void)showAutoFillButtonWithTitle:(id)arg1;

@end
