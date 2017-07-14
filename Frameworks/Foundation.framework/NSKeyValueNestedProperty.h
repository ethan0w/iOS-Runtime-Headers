/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueNestedProperty : NSKeyValueProperty {
    id  _dependentValueKeyOrKeys;
    BOOL  _dependentValueKeyOrKeysIsASet;
    BOOL  _isAllowedToResultInForwarding;
    NSString * _keyPathFromRelatedObject;
    NSString * _keyPathWithoutOperatorComponents;
    NSString * _relationshipKey;
    NSKeyValueUnnestedProperty * _relationshipProperty;
}

- (void)_addDependentValueKey:(id)arg1;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { }*)arg1 getAffectingProperties:(id)arg2;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned int)arg3 propertiesBeingInitialized:(struct __CFSet { }*)arg4;
- (Class)_isaForAutonotifying;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (void)dealloc;
- (id)dependentValueKeyOrKeysIsASet:(BOOL*)arg1;
- (id)description;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(struct { id x1; })arg5;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(struct { id x1; }*)arg5;

@end
