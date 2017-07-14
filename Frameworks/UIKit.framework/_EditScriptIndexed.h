/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _EditScriptIndexed : _EditScript {
    _EditScriptIndexedAtom * _currentScriptAtom;
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(BOOL)arg3 operationPrecedence:(int)arg4;

- (void)addToCurrentScriptAtomEditOperation:(int)arg1 editIndex:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;
- (id)applyToArray:(id)arg1;
- (void)dealloc;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(int)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(BOOL)arg5;
- (void)initializeCurrentScriptAtom;

@end
