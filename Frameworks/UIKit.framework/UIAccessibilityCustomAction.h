/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomAction : NSObject {
    NSString * _name;
    SEL  _selector;
    id  _target;
}

@property (getter=_image, setter=_setImage:, nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SEL selector;
@property (getter=_shortName, setter=_setShortName:, nonatomic, retain) NSString *shortName;
@property (nonatomic) BOOL shouldSuppressActionHint;
@property (nonatomic) id target;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)name;
- (SEL)selector;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityCustomActionIdentifier;
- (BOOL)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_image;
- (void)_setImage:(id)arg1;
- (void)_setShortName:(id)arg1;
- (id)_shortName;
- (id)description;
- (void)setShouldSuppressActionHint:(BOOL)arg1;
- (BOOL)shouldSuppressActionHint;

@end
