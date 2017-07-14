/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate> {
    NSMutableAttributedString * _attributedString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _beforeEndEditedRange;
    TTMergeableStringUndoGroup * _coalescingUndoGroup;
    BOOL  _convertAttributes;
    BOOL  _delayedFixupAfterEditingWantsUndoCommand;
    NSMutableArray * _deletedRanges;
    BOOL  _directlyEditing;
    BOOL  _disableUndoCoalesceBreaking;
    TTMergeableStringVersionedDocument * _document;
    unsigned int  _editingCount;
    BOOL  _filterPastedAttributes;
    BOOL  _filterSubstringAttributes;
    BOOL  _filterSubstringAttributesForPlainText;
    BOOL  _isApplyingUndoCommand;
    BOOL  _isChangingSelectionByGestures;
    BOOL  _isDictating;
    BOOL  _isDragging;
    BOOL  _isEndingEditing;
    BOOL  _isFixing;
    BOOL  _isHandlingTextCheckingResults;
    BOOL  _isResettingBaseWritingDirection;
    BOOL  _isSelectingText;
    BOOL  _isTypingOrMarkingText;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _lastUndoEditRange;
    BOOL  _pendingFixupAfterEditing;
    BOOL  _previouslyHadMarkedText;
    BOOL  _retainOriginalFormatting;
    <TTTextStorageStyler> * _styler;
    unsigned int  _temporaryAttributeEditing;
    int  _ttChangeInLength;
    unsigned int  _ttEditedMask;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _ttEditedRange;
    NSMutableArray * _undoCommands;
    NSUndoManager * _undoManager;
    BOOL  _wantsUndoCommands;
}

@property (nonatomic, readonly) NSAttributedString *_icaxUnfilteredAttributedString;
@property (nonatomic, retain) NSMutableAttributedString *attributedString;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } beforeEndEditedRange;
@property (nonatomic, retain) TTMergeableStringUndoGroup *coalescingUndoGroup;
@property (nonatomic) BOOL convertAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayedFixupAfterEditingWantsUndoCommand;
@property (nonatomic, readonly) NSMutableArray *deletedRanges;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableUndoCoalesceBreaking;
@property (nonatomic, readonly) TTMergeableStringVersionedDocument *document;
@property (nonatomic) unsigned int editingCount;
@property (nonatomic) BOOL filterPastedAttributes;
@property (nonatomic) BOOL filterSubstringAttributes;
@property (nonatomic) BOOL filterSubstringAttributesForPlainText;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isApplyingUndoCommand;
@property (nonatomic) BOOL isChangingSelectionByGestures;
@property (nonatomic) BOOL isDictating;
@property (nonatomic) BOOL isDragging;
@property (nonatomic, readonly) BOOL isEditingTemporaryAttributes;
@property (nonatomic) BOOL isEndingEditing;
@property (nonatomic) BOOL isFixing;
@property (nonatomic) BOOL isHandlingTextCheckingResults;
@property (nonatomic) BOOL isResettingBaseWritingDirection;
@property (nonatomic) BOOL isSelectingText;
@property (nonatomic) BOOL isTypingOrMarkingText;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } lastUndoEditRange;
@property (nonatomic, readonly) TTMergeableAttributedString *mergeableString;
@property (nonatomic) BOOL pendingFixupAfterEditing;
@property (nonatomic) BOOL retainOriginalFormatting;
@property (nonatomic, retain) <TTTextStorageStyler> *styler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *textViews;
@property (nonatomic) int ttChangeInLength;
@property (nonatomic) unsigned int ttEditedMask;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } ttEditedRange;
@property (nonatomic, retain) NSMutableArray *undoCommands;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic) BOOL wantsUndoCommands;

+ (id)bulletTextAttributesWithTextFont:(struct UIFont { Class x1; }*)arg1 paragraphStyle:(id)arg2 letterpress:(BOOL)arg3;
+ (id)filteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 forPlainText:(BOOL)arg3 fixAttachments:(BOOL)arg4;
+ (void)fixAttachmentsForRenderingInAttributedString:(id)arg1;
+ (id)removeDataDetectorLinksForAttributedString:(id)arg1;
+ (id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(BOOL)arg2;
+ (id)standardizedAttributedStringFromAttributedString:(id)arg1 fixAttachments:(BOOL)arg2 translateTTFont:(BOOL)arg3;

- (void).cxx_destruct;
- (id)_icaxUnfilteredAttributedString;
- (BOOL)_shouldSetOriginalFontAttribute;
- (BOOL)_usesSimpleTextEffects;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addUndoCommand:(id)arg1;
- (void)applyUndoGroup:(id)arg1;
- (id)attributedString;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })beforeEndEditedRange;
- (void)beginEditing;
- (void)beginTemporaryAttributeEditing;
- (void)beginTemporaryAttributes;
- (void)breakUndoCoalescing;
- (id)coalescingUndoGroup;
- (BOOL)convertAttributes;
- (void)convertNSTablesToTabs:(id)arg1;
- (void)coordinateAccess:(id /* block */)arg1;
- (void)coordinateEditing:(id /* block */)arg1;
- (void)coordinateReading:(id /* block */)arg1;
- (id)dataFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned int)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (BOOL)delayedFixupAfterEditingWantsUndoCommand;
- (id)deletedRanges;
- (BOOL)disableUndoCoalesceBreaking;
- (id)document;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (void)editedAttributeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)editedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (unsigned int)editingCount;
- (void)endEditing;
- (void)endTemporaryAttributeEditing;
- (void)endTemporaryAttributes;
- (void)executeDelayedFixupAfterEditing;
- (BOOL)filterPastedAttributes;
- (BOOL)filterSubstringAttributes;
- (BOOL)filterSubstringAttributesForPlainText;
- (id)filteredAttributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixupAfterEditing;
- (void)fixupAfterEditingDelayedToEndOfRunLoop;
- (void)forceFixupAfterEditingIfDelayed;
- (BOOL)ic_containsAttribute:(id)arg1 InRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (BOOL)isApplyingUndoCommand;
- (BOOL)isChangingSelectionByGestures;
- (BOOL)isDeletingContentAttachmentWithReplacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementLength:(unsigned int)arg2;
- (BOOL)isDeletingDictationAttachmentWithReplacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementLength:(unsigned int)arg2;
- (BOOL)isDictating;
- (BOOL)isDragging;
- (BOOL)isEditing;
- (BOOL)isEditingOrConvertingMarkedText:(BOOL)arg1;
- (BOOL)isEditingTemporaryAttributes;
- (BOOL)isEndingEditing;
- (BOOL)isFixing;
- (BOOL)isHandlingTextCheckingResults;
- (BOOL)isResettingBaseWritingDirection;
- (BOOL)isSelectingText;
- (BOOL)isTypingOrMarkingText;
- (struct _NSRange { unsigned int x1; unsigned int x2; })lastUndoEditRange;
- (unsigned int)mergeWithDocument:(id)arg1;
- (id)mergeableString;
- (BOOL)mergeableStringIsEqualAfterSerialization:(id)arg1;
- (BOOL)pendingFixupAfterEditing;
- (void)preReplaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withStringLength:(unsigned int)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)replaceWithDocument:(id)arg1;
- (void)resetTTEdits;
- (void)resetUndoManager;
- (void)restoreSelection:(id)arg1;
- (BOOL)retainOriginalFormatting;
- (void)saveSelectionDuringBlock:(id /* block */)arg1;
- (void)saveSelectionDuringBlock:(id /* block */)arg1 affinity:(unsigned int)arg2;
- (id)savedSelectionWithSelectionAffinity:(unsigned int)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBeforeEndEditedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setCoalescingUndoGroup:(id)arg1;
- (void)setConvertAttributes:(BOOL)arg1;
- (void)setDelayedFixupAfterEditingWantsUndoCommand:(BOOL)arg1;
- (void)setDisableUndoCoalesceBreaking:(BOOL)arg1;
- (void)setEditingCount:(unsigned int)arg1;
- (void)setFilterPastedAttributes:(BOOL)arg1;
- (void)setFilterSubstringAttributes:(BOOL)arg1;
- (void)setFilterSubstringAttributesForPlainText:(BOOL)arg1;
- (void)setIsApplyingUndoCommand:(BOOL)arg1;
- (void)setIsChangingSelectionByGestures:(BOOL)arg1;
- (void)setIsDictating:(BOOL)arg1;
- (void)setIsDragging:(BOOL)arg1;
- (void)setIsEndingEditing:(BOOL)arg1;
- (void)setIsFixing:(BOOL)arg1;
- (void)setIsHandlingTextCheckingResults:(BOOL)arg1;
- (void)setIsResettingBaseWritingDirection:(BOOL)arg1;
- (void)setIsSelectingText:(BOOL)arg1;
- (void)setIsTypingOrMarkingText:(BOOL)arg1;
- (void)setLastUndoEditRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPendingFixupAfterEditing:(BOOL)arg1;
- (void)setRetainOriginalFormatting:(BOOL)arg1;
- (void)setStyler:(id)arg1;
- (void)setTtChangeInLength:(int)arg1;
- (void)setTtEditedMask:(unsigned int)arg1;
- (void)setTtEditedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setUndoCommands:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setWantsUndoCommands:(BOOL)arg1;
- (BOOL)shouldBreakUndoCoalescingWithReplacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementLength:(unsigned int)arg2;
- (id)standardizedAttributedStringFixingTextAttachments;
- (id)string;
- (id)styler;
- (BOOL)textViewHasMarkedText:(struct UITextView { Class x1; }*)arg1;
- (id)textViews;
- (int)ttChangeInLength;
- (unsigned int)ttEditedMask;
- (struct _NSRange { unsigned int x1; unsigned int x2; })ttEditedRange;
- (id)undoCommands;
- (id)undoManager;
- (BOOL)wantsUndoCommands;

@end
