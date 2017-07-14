/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPad : UIControl {
    NSMutableArray * _buttons;
    BOOL  _numberButtonsEnabled;
}

@property (nonatomic) float buttonBackgroundAlpha;
@property (retain) NSArray *buttons;
@property (nonatomic) BOOL numberButtonsEnabled;

- (void).cxx_destruct;
- (void)_addButton:(id)arg1;
- (float)_backgroundAlphaOfButton:(id)arg1;
- (void)_layoutGrid;
- (void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(float)arg2;
- (float)buttonBackgroundAlpha;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)buttons;
- (void)dealloc;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (id)initWithButtons:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)numberButtonsEnabled;
- (void)replaceButton:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setButtonBackgroundAlpha:(float)arg1;
- (void)setButtons:(id)arg1;
- (void)setNumberButtonsEnabled:(BOOL)arg1;

@end
