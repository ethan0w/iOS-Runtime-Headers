/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification> {
}

@property id accessibilityDelegate;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property id accessibilityContainer;
@property BOOL isAccessibilityElement;
@property(retain) NSString * accessibilityLabel;
@property(retain) NSString * accessibilityHint;
@property(retain) NSString * accessibilityValue;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } accessibilityFrame;
@property unsigned long long accessibilityTraits;
@property(copy) NSString * accessibilityIdentifier;


- (id)initWithAccessibilityContainer:(id)arg1;
- (void)delegateSpecificsForAttribute:(int)arg1 delegate:(id*)arg2 selector:(SEL*)arg3;
- (void)setDelegate:(id)arg1 forAttribute:(int)arg2 withSelector:(SEL)arg3;
- (void)setTableCellYOffset:(float)arg1;
- (id)accessibilityDelegate;
- (void)_accessibilityDeleteCharacterAtCursor;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(int)arg2;
- (BOOL)_accessibilityCanDeleteCharacterWithHandwriting;
- (BOOL)_accessibilityShouldEchoHandwritingCharacter;
- (BOOL)_accessibilityCanHandleDirectHandwritingInput;
- (int)_accessibilityBestCharacterModeForHandwriting;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;

@end
