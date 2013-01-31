/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSAttributedString, UIColor, UITextRange, UITextPosition, UIFont, UIDelayedAction, UIWebDocumentView, UITextInteractionAssistant, <UITextInputDelegate>, <UITextInputTokenizer>, UIView, DOMHTMLElement, NSDictionary, WebFrame, NSString, <UITextViewDelegate>;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInput> {
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    UIDelayedAction *m_selectionTimer;
    UIDelayedAction *m_longPressAction;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_reentrancyGuard;
    BOOL m_readyForScroll;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_hasExplicitLineHeight;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    int m_textAlignment;
    UIView *m_inputView;
    UIView *m_inputAccessoryView;
    float m_lineHeight;
    BOOL m_skipScrollContainingView;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    BOOL m_clearsOnInsertion;
}

@property <UITextViewDelegate> * delegate;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property int textAlignment;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property(getter=isEditable) BOOL editable;
@property unsigned int dataDetectorTypes;
@property BOOL allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSDictionary * typingAttributes;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property BOOL clearsOnInsertion;
@property(getter=isEditing) BOOL editing;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;

+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (id)excludedElementsForHTML;

- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (Class)_printFormatterClass;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (void)scrollToMakeCaretVisible:(BOOL)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)displayScrollerIndicators;
- (BOOL)showScrollerIndicators;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (float)bottomBufferHeight;
- (void)setBottomBufferHeight:(float)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setMarginTop:(int)arg1;
- (int)marginTop;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)contentAsHTMLString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectionToStart;
- (void)updateSelection;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)mightHaveLinks;
- (unsigned int)_allowedLinkTypes;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)recalculateStyle;
- (void)setContentToHTMLString:(id)arg1;
- (void)_transferTextViewPropertiesFromText:(id)arg1;
- (void)startDataDetectorsWithWebLock;
- (BOOL)shouldStartDataDetectors;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)_updateForNewSize:(struct CGSize { float x1; float x2; })arg1 withOldSize:(struct CGSize { float x1; float x2; })arg2;
- (void)ensureSelection;
- (void)scrollRectToVisibleInContainingScrollView;
- (BOOL)shouldScrollEnclosingScrollView;
- (id)undoManagerForWebView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (void)setSelectionToEnd;
- (void)performBecomeEditableTasks;
- (void)delayedUpdateForKeyboardDidShow;
- (void)_dealloc;
- (void)cancelDataDetectorsWithWebLock;
- (void)keyboardDidShow:(id)arg1;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)updateWebViewObjects;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (id)automaticallySelectedOverlay;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (void)webViewDidChange:(id)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (id)inputView;
- (id)_findWebViewWordBoundaryFromPosition:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (BOOL)allowsEditingTextAttributes;
- (id)_keyboardResponder;
- (id)selectionRectsForRange:(id)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (int)selectionGranularity;
- (void)setSelectionAffinity:(int)arg1;
- (int)selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)setInputDelegate:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (void)setSelectedTextRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)hasText;
- (id)metadataDictionariesForDictationResults;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)_proxyTextInput;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)tokenizer;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)select:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)paste:(id)arg1;
- (void)replace:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)copy:(id)arg1;
- (void)disableClearsOnInsertion;
- (void)cut:(id)arg1;
- (id)inputDelegate;
- (id)selectedText;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInRange:(id)arg1;
- (id)selectedTextRange;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)markedTextRange;
- (BOOL)canResignFirstResponder;
- (void)selectAll;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)clearsOnInsertion;
- (id)inputAccessoryView;
- (void)setTypingAttributes:(id)arg1;
- (id)typingAttributes;
- (void)setClearsOnInsertion:(BOOL)arg1;
- (void)selectAll:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (id)textColor;
- (void)forwardInvocation:(id)arg1;
- (id)attributedText;
- (void)setLineHeight:(float)arg1;
- (id)styleString;
- (id)webView;
- (BOOL)isFirstResponder;
- (id)textInputTraits;
- (id)selectionView;
- (id)interactionAssistant;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (int)textAlignment;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setTextAlignment:(int)arg1;
- (float)lineHeight;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (id)_automationValue;
- (id)text;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToSuperview;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (void)setFont:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)isEditable;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)resignFirstResponder;
- (id)undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)clearBody;
- (id)document;
- (id)body;

@end
