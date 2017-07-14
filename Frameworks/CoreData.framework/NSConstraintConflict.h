/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSConstraintConflict : NSObject {
    NSDictionary * _conflictedValues;
    NSArray * _conflictingObjects;
    NSArray * _conflictingSnapshots;
    NSArray * _constraint;
    NSManagedObject * _databaseObject;
    NSDictionary * _databaseSnapshot;
}

@property (readonly, retain) NSArray *conflictingObjects;
@property (readonly, retain) NSArray *conflictingSnapshots;
@property (readonly, retain) NSArray *constraint;
@property (readonly, retain) NSDictionary *constraintValues;
@property (readonly, retain) NSManagedObject *databaseObject;
@property (readonly, retain) NSDictionary *databaseSnapshot;

- (BOOL)_isDBConflict;
- (id)conflictingObjects;
- (id)conflictingSnapshots;
- (id)constraint;
- (id)constraintValues;
- (id)databaseObject;
- (id)databaseSnapshot;
- (void)dealloc;
- (id)description;
- (id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5;
- (BOOL)supportsSecureCoding;

@end
