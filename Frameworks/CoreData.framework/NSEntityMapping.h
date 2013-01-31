/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSData, NSDictionary, NSExpression, NSMutableArray;

@interface NSEntityMapping : NSObject  {
    void *_reserved;
    void *_reserved1;
    NSDictionary *_mappingsByName;
    NSString *_name;
    unsigned int _mappingType;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
    NSString *_entityMigrationPolicyClassName;
    NSMutableArray *_attributeMappings;
    NSMutableArray *_relationshipMappings;
    struct __entityMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedEntityMapping : 31; 
    } _entityMappingFlags;
}

+ (void)initialize;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setUserInfo:(id)arg1;
- (BOOL)isEditable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;
- (void)_addAttributeMapping:(id)arg1;
- (id)_migrationPolicy;
- (id)_mappingsByName;
- (void)setEntityMigrationPolicyClassName:(id)arg1;
- (id)relationshipMappings;
- (id)attributeMappings;
- (id)entityMigrationPolicyClassName;
- (id)sourceExpression;
- (id)destinationEntityVersionHash;
- (id)sourceEntityVersionHash;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_createCachesAndOptimizeState;
- (void)_throwIfNotEditable;
- (void)setMappingType:(unsigned int)arg1;
- (void)setDestinationEntityVersionHash:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setSourceEntityVersionHash:(id)arg1;
- (void)setSourceEntityName:(id)arg1;
- (void)setRelationshipMappings:(id)arg1;
- (void)setAttributeMappings:(id)arg1;
- (void)setSourceExpression:(id)arg1;
- (id)destinationEntityName;
- (id)sourceEntityName;
- (unsigned int)mappingType;

@end
