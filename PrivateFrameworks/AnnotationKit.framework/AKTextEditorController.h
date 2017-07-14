/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate> {
    AKAnnotation<AKTextAnnotationProtocol> * _annotation;
    AKController * _controller;
    UIScrollView * _currentEnclosingScrollView;
    float  _handleCompensatingScaleFactor;
    BOOL  _isInAdjustAnnotationFrameToFitText;
    BOOL  _isInEndEditing;
    struct CGPoint { 
        float x; 
        float y; 
    }  _keyboardStartingContentInset;
    BOOL  _keyboardWillRemainUp;
    float  _modelToEditorScaleFactor;
    AKPageController * _pageController;
    float  _renderingTextStorageScaleFactor;
    NSTextStorage * _textStorage;
    UITextView * _textView;
    NSUndoManager * _textViewUndoManager;
}

@property AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property AKController *controller;
@property UIScrollView *currentEnclosingScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property float handleCompensatingScaleFactor;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEditing;
@property BOOL isInAdjustAnnotationFrameToFitText;
@property BOOL isInEndEditing;
@property struct CGPoint { float x1; float x2; } keyboardStartingContentInset;
@property BOOL keyboardWillRemainUp;
@property float modelToEditorScaleFactor;
@property AKPageController *pageController;
@property float renderingTextStorageScaleFactor;
@property (readonly) Class superclass;
@property (retain) NSTextStorage *textStorage;
@property (retain) UITextView *textView;
@property (retain) NSUndoManager *textViewUndoManager;

- (void).cxx_destruct;
- (void)_adjustAnnotationFrameToFitText;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_adjustScrollViewForShownKeyboardRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)_commitToModelWithoutEndingEditing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editorFrameForTextBoundsInModel:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_endEditing;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(float)arg2 aboutCenter:(struct CGPoint { float x1; float x2; })arg3;
- (void)_performBlockOnMainThread:(id /* block */)arg1;
- (void)_registerForKeyboardNotifications;
- (void)_returnScrollViewAfterShownKeyboard;
- (void)_unregisterForKeyboardNotifications;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andOrientation:(int)arg3 additionalRotation:(float)arg4;
- (id)annotation;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)commitToModelWithoutEndingEditing;
- (id)controller;
- (id)currentEnclosingScrollView;
- (void)dealloc;
- (void)endEditing;
- (float)handleCompensatingScaleFactor;
- (id)initWithController:(id)arg1;
- (BOOL)isEditing;
- (BOOL)isInAdjustAnnotationFrameToFitText;
- (BOOL)isInEndEditing;
- (struct CGPoint { float x1; float x2; })keyboardStartingContentInset;
- (BOOL)keyboardWillRemainUp;
- (float)modelToEditorScaleFactor;
- (id)pageController;
- (float)renderingTextStorageScaleFactor;
- (void)setAnnotation:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentEnclosingScrollView:(id)arg1;
- (void)setHandleCompensatingScaleFactor:(float)arg1;
- (void)setIsInAdjustAnnotationFrameToFitText:(BOOL)arg1;
- (void)setIsInEndEditing:(BOOL)arg1;
- (void)setKeyboardStartingContentInset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setKeyboardWillRemainUp:(BOOL)arg1;
- (void)setModelToEditorScaleFactor:(float)arg1;
- (void)setPageController:(id)arg1;
- (void)setRenderingTextStorageScaleFactor:(float)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTextViewUndoManager:(id)arg1;
- (id)textStorage;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)textViewUndoManager;
- (void)updateForTextAttributeChange;

@end
