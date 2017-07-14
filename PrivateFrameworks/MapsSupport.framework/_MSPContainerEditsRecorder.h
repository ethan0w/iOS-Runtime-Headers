/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPContainerEditsRecorder : NSObject {
    NSMutableArray * _orderedEdits;
    NSMutableArray * _originalMutableArray;
    NSMutableArray * _proxiesMutableArray;
    NSMutableSet * _updatedObjects;
}

@property (nonatomic, readonly) NSArray *orderedEdits;
@property (nonatomic, readonly) NSMutableArray *recordableMutableArray;

- (void).cxx_destruct;
- (void)_editDetectorDidDetectUpdateForObject:(id)arg1;
- (unsigned int)countOfEditableObjects;
- (id)editableObjectsAtIndexes:(id)arg1;
- (void)getEditableObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithMutableArray:(id)arg1;
- (void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inEditableObjectsAtIndex:(unsigned int)arg2;
- (id)objectInEditableObjectsAtIndex:(unsigned int)arg1;
- (id)orderedEdits;
- (id)recordableMutableArray;
- (void)removeEditableObjectsAtIndexes:(id)arg1;
- (void)removeObjectFromEditableObjectsAtIndex:(unsigned int)arg1;
- (void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2;
- (void)replaceObjectInEditableObjectsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;

@end
