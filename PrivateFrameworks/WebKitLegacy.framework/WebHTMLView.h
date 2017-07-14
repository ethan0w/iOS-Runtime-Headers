/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLView : WAKView <WebDocumentElement, WebDocumentIncrementalSearching, WebDocumentOptionsSearching, WebDocumentSearching, WebDocumentSelection, WebDocumentView, WebMultipleTextMatches> {
    WebHTMLViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)supportedImageMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)_accessibilityParentForSubview:(id)arg1;
- (float)_adjustedBottomOfPageWithTop:(float)arg1 bottom:(float)arg2 limit:(float)arg3;
- (void)_applyEditingStyleToSelection:(struct Ref<WebCore::EditingStyle> { struct EditingStyle {} *x1; }*)arg1 withUndoAction:(int)arg2;
- (void)_applyStyleToSelection:(id)arg1 withUndoAction:(int)arg2;
- (void)_autoscroll;
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)arg1 height:(float)arg2 maximumPageWidth:(float)arg3;
- (BOOL)_beginPrintModeWithPageWidth:(float)arg1 height:(float)arg2 shrinkToFit:(BOOL)arg3;
- (BOOL)_beginScreenPaginationModeWithPageSize:(struct CGSize { float x1; float x2; })arg1 shrinkToFit:(BOOL)arg2;
- (BOOL)_canAlterCurrentSelection;
- (BOOL)_canDecreaseSelectionListLevel;
- (BOOL)_canEdit;
- (BOOL)_canEditRichly;
- (BOOL)_canIncreaseSelectionListLevel;
- (BOOL)_canSmartCopyOrDelete;
- (void)_changeWordCaseWithSelector:(SEL)arg1;
- (void)_clearLastHitViewIfSelf;
- (id)_compositingLayersHostingView;
- (id)_dataSource;
- (void)_decreaseSelectionListLevel;
- (void)_destroyAllWebPlugins;
- (id)_documentRange;
- (id)_emptyStyle;
- (void)_endPrintMode;
- (void)_endScreenPaginationMode;
- (void)_executeSavedKeypressCommands;
- (BOOL)_findString:(id)arg1 options:(unsigned int)arg2;
- (id)_frame;
- (void)_frameOrBoundsChanged;
- (id)_frameView;
- (BOOL)_handleEditingKeyEvent:(struct KeyboardEvent { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; unsigned int x3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; unsigned short x16; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_17_1_1; } x17; struct EventPath {} *x18; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_19_1_1; } x19; unsigned long long x20; struct RefPtr<WebCore::Event> { struct Event {} *x_21_1_1; } x21; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_22_1_1; } x22; int x23; bool x24; bool x25; bool x26; bool x27; bool x28; bool x29; struct unique_ptr<WebCore::PlatformKeyboardEvent, std::__1::default_delete<WebCore::PlatformKeyboardEvent> > { struct __compressed_pair<WebCore::PlatformKeyboardEvent *, std::__1::default_delete<WebCore::PlatformKeyboardEvent> > { struct PlatformKeyboardEvent {} *x_1_2_1; } x_30_1_1; } x30; }*)arg1;
- (BOOL)_hasHTMLDocument;
- (BOOL)_hasInsertionPoint;
- (BOOL)_hasSelection;
- (BOOL)_hasSelectionOrInsertionPoint;
- (id)_increaseSelectionListLevel;
- (id)_increaseSelectionListLevelOrdered;
- (id)_increaseSelectionListLevelUnordered;
- (id)_insertOrderedList;
- (id)_insertUnorderedList;
- (BOOL)_insideAnotherHTMLView;
- (BOOL)_isEditable;
- (BOOL)_isInPrintMode;
- (BOOL)_isInScreenPaginationMode;
- (BOOL)_isSelectionEvent:(id)arg1;
- (BOOL)_isTopHTMLView;
- (BOOL)_isUsingAcceleratedCompositing;
- (void)_layoutIfNeeded;
- (BOOL)_needsLayout;
- (id)_pluginController;
- (void)_restoreSubviews;
- (id)_selectedRange;
- (void)_selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionRect;
- (void)_setAsideSubviews;
- (void)_setMouseDownEvent:(id)arg1;
- (void)_setPrinting:(BOOL)arg1 minimumPageLogicalWidth:(float)arg2 logicalHeight:(float)arg3 originalPageWidth:(float)arg4 originalPageHeight:(float)arg5 maximumShrinkRatio:(float)arg6 adjustViewSize:(BOOL)arg7 paginateScreenContent:(BOOL)arg8;
- (void)_setToolTip:(id)arg1;
- (void)_setTransparentBackground:(BOOL)arg1;
- (BOOL)_shouldDeleteRange:(id)arg1;
- (BOOL)_shouldInsertFragment:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(int)arg3;
- (BOOL)_shouldInsertText:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(int)arg3;
- (BOOL)_shouldReplaceSelectionWithText:(id)arg1 givenAction:(int)arg2;
- (void)_startAutoscrollTimer:(id)arg1;
- (void)_stopAutoscrollTimer;
- (id)_topHTMLView;
- (BOOL)_transparentBackground;
- (void)_updateControlTints;
- (void)_updateSelectionForInputManager;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (id)_webView;
- (BOOL)_web_isDrawingIntoLayer;
- (void)_web_makePluginSubviewsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_web_updateLayoutAndStyleIfNeededRecursive;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityRootElement;
- (void)addSubview:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)attachRootLayer:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (unsigned int)characterIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearFocus;
- (void)clearText:(id)arg1;
- (void)close;
- (void)closeIfNotCurrentView;
- (int)conversationIdentifier;
- (void)copy:(id)arg1;
- (struct Command { struct EditorInternalCommand {} *x1; int x2; struct RefPtr<WebCore::Frame> { struct Frame {} *x_3_1_1; } x3; })coreCommandByName:(const char *)arg1;
- (struct Command { struct EditorInternalCommand {} *x1; int x2; struct RefPtr<WebCore::Frame> { struct Frame {} *x_3_1_1; } x3; })coreCommandBySelector:(SEL)arg1;
- (unsigned int)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned int)arg3 limit:(unsigned int)arg4 markMatches:(BOOL)arg5;
- (void)cut:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deselectAll;
- (void)detachRootLayer;
- (void)doCommandBySelector:(SEL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSingleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1 allowShadowContent:(BOOL)arg2;
- (void)executeCoreCommandByName:(const char *)arg1;
- (void)executeCoreCommandBySelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)hasMarkedText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)indent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertText:(id)arg1;
- (BOOL)isOpaque;
- (void)jumpToSelection:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)layout;
- (void)layoutIfNeeded;
- (void)layoutToMinimumPageWidth:(float)arg1 height:(float)arg2 originalPageWidth:(float)arg3 originalPageHeight:(float)arg4 maximumShrinkRatio:(float)arg5 adjustingViewSize:(BOOL)arg6;
- (void)lowercaseWord:(id)arg1;
- (BOOL)maintainsInactiveSelection;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })markedRange;
- (BOOL)markedTextMatchesAreHighlighted;
- (void)markedTextUpdate:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)outdent:(id)arg1;
- (void)overWrite:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)reapplyStyles;
- (id)rectsForTextMatches;
- (BOOL)resignFirstResponder;
- (void)scrollWheel:(id)arg1;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4 startInSelection:(BOOL)arg5;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (id)selectedString;
- (struct CGImage { }*)selectionImageForcingBlackText:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionImageRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionRect;
- (id)selectionTextRects;
- (id)selectionView;
- (void)setDataSource:(id)arg1;
- (void)setMark:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextMatchesAreHighlighted:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNeedsToApplyStyles:(BOOL)arg1;
- (void)setScale:(float)arg1;
- (id)string;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (BOOL)supportsTextEncoding;
- (void)swapWithMark:(id)arg1;
- (void)toggleBold:(id)arg1;
- (void)toggleItalic:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)touch:(id)arg1;
- (void)transpose:(id)arg1;
- (void)underline:(id)arg1;
- (void)unmarkAllTextMatches;
- (void)unmarkText;
- (void)unscript:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)yank:(id)arg1;
- (void)yankAndSelect:(id)arg1;

@end
