/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableIndexSet, NSIndexSet;

@interface PLImportSessionInfo : NSObject  {
    BOOL _importComplete;
    BOOL _importStopped;
    BOOL _importingSelection;
    NSMutableIndexSet *_importIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importCompleteIndexes;
}

@property BOOL importComplete;
@property BOOL importStopped;
@property(readonly) NSIndexSet * importIndexes;
@property(readonly) NSIndexSet * inProgressIndexes;
@property(readonly) NSIndexSet * errorIndexes;
@property(readonly) NSIndexSet * completedIndexes;
@property BOOL importingSelection;


- (void)dealloc;
- (void)setImportingSelection:(BOOL)arg1;
- (BOOL)importingSelection;
- (void)setImportStopped:(BOOL)arg1;
- (BOOL)importStopped;
- (void)setImportComplete:(BOOL)arg1;
- (BOOL)importComplete;
- (void)completeImportForIndex:(unsigned int)arg1 error:(BOOL)arg2;
- (void)beginImportForIndex:(unsigned int)arg1;
- (void)addIndexToImport:(unsigned int)arg1;
- (id)initWithImportIndexes:(id)arg1;
- (BOOL)_isImportCompleteForIndex:(unsigned int)arg1;
- (id)inProgressIndexes;
- (id)errorIndexes;
- (id)completedIndexes;
- (id)importIndexes;
- (void)removeIndex:(unsigned int)arg1;
- (void)shiftIndexesStartingAtIndex:(unsigned int)arg1 by:(unsigned int)arg2;

@end
