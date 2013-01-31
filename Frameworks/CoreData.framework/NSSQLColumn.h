/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLColumn : NSSQLProperty  {
    NSString *_columnName;
    int _sqlType;
    unsigned int _precision;
    int _scale;
    unsigned int _fetchIndex;
    unsigned int _slot;
    unsigned int _allowAliasing;
}


- (id)description;
- (void)dealloc;
- (void)setScale:(int)arg1;
- (int)scale;
- (id)cloneForReadOnlyFetching;
- (void)_setSlotIfDefault:(unsigned int)arg1;
- (void)_setFetchIndex:(unsigned int)arg1;
- (unsigned int)fetchIndex;
- (unsigned int)roughSizeEstimate;
- (void)setPrecision:(unsigned int)arg1;
- (unsigned int)precision;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)_setColumnName:(id)arg1;
- (id)initForReadOnlyFetching;
- (void)_setSQLType:(unsigned int)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)slot;
- (unsigned int)sqlType;
- (id)columnName;
- (BOOL)allowAliasing;
- (void)setAllowAliasing:(BOOL)arg1;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned int)arg2;

@end
