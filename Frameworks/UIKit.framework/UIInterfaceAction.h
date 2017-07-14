/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterfaceAction : NSObject <NSCopying> {
    <_UIInterfaceActionPresenting> * __presentingController;
    UIInterfaceActionRepresentationView * __visualRepresentation;
    NSString * _classificationTitle;
    UIView * _customContentView;
    UIViewController * _customContentViewController;
    BOOL  _enabled;
    BOOL  _focused;
    id /* block */  _handler;
    UIColor * _imageTintColor;
    UIImage * _leadingImage;
    struct CGSize { 
        float width; 
        float height; 
    }  _leadingImageLayoutSize;
    BOOL  _preferred;
    NSString * _title;
    int  _titleAlignment;
    UIColor * _titleTextColor;
    UIImage * _trailingImage;
    struct CGSize { 
        float width; 
        float height; 
    }  _trailingImageLayoutSize;
    int  _type;
    UIInterfaceActionVisualStyle * _visualStyle;
    NSPointerArray * _weakDisplayPropertyObservers;
}

@property (setter=_setPresentingController:, nonatomic) <_UIInterfaceActionPresenting> *_presentingController;
@property (nonatomic, readonly) int _typeForDeterminingViewRepresentation;
@property (setter=_setVisualRepresentation:, nonatomic) UIInterfaceActionRepresentationView *_visualRepresentation;
@property (nonatomic, copy) NSString *classificationTitle;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, retain) UIViewController *customContentViewController;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (getter=_isFocused, setter=_setIsFocused:, nonatomic) BOOL focused;
@property (nonatomic, copy) id /* block */ handler;
@property (getter=_imageTintColor, setter=_setImageTintColor:, nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic, retain) UIImage *leadingImage;
@property (nonatomic) struct CGSize { float x1; float x2; } leadingImageLayoutSize;
@property (getter=_isPreferred, setter=_setIsPreferred:, nonatomic) BOOL preferred;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int titleAlignment;
@property (getter=_titleTextColor, setter=_setTitleTextColor:, nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, retain) UIImage *trailingImage;
@property (nonatomic) struct CGSize { float x1; float x2; } trailingImageLayoutSize;
@property (nonatomic) int type;
@property (getter=_visualStyle, setter=_setVisualStyle:, nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic, readonly) NSPointerArray *weakDisplayPropertyObservers;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_observableDisplayProperties;
+ (void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(BOOL)arg1;
+ (id)actionWithCustomContentView:(id)arg1;
+ (id)actionWithCustomContentViewController:(id)arg1;
+ (id)actionWithTitle:(id)arg1 type:(int)arg2 handler:(id /* block */)arg3;
+ (BOOL)changedProperties:(id)arg1 containsAny:(id)arg2;

- (void).cxx_destruct;
- (void)_addActionDisplayPropertyObserver:(id)arg1;
- (id)_imageTintColor;
- (void)_invokeHandlerWithCompletionBlock:(id /* block */)arg1;
- (BOOL)_isFocused;
- (BOOL)_isPreferred;
- (struct CGSize { float x1; float x2; })_layoutSizeForImageProperty:(id)arg1;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (void)_notifyObserversVisualStyleDidChange;
- (id)_presentingController;
- (void)_removeActionDisplayPropertyObserver:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setIsFocused:(BOOL)arg1;
- (void)_setIsPreferred:(BOOL)arg1;
- (void)_setPresentingController:(id)arg1;
- (void)_setTitleTextColor:(id)arg1;
- (void)_setVisualRepresentation:(id)arg1;
- (void)_setVisualStyle:(id)arg1;
- (id)_titleTextColor;
- (int)_typeForDeterminingViewRepresentation;
- (id)_visualRepresentation;
- (id)_visualStyle;
- (id)classificationTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customContentView;
- (id)customContentViewController;
- (id)description;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 type:(int)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(id /* block */)arg5;
- (BOOL)isEnabled;
- (id)leadingImage;
- (struct CGSize { float x1; float x2; })leadingImageLayoutSize;
- (void)setClassificationTitle:(id)arg1;
- (void)setCustomContentViewController:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingImageLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAlignment:(int)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingImageLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)titleAlignment;
- (id)trailingImage;
- (struct CGSize { float x1; float x2; })trailingImageLayoutSize;
- (int)type;
- (id)weakDisplayPropertyObservers;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)actionWithTitle:(id)arg1 resource:(id)arg2 handler:(id /* block */)arg3;

@end
