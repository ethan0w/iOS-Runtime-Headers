/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSExpression;

@interface NSFetchRequestExpression : NSExpression  {
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    struct _fetchExpressionFlags { 
        unsigned int isCountOnly : 1; 
        unsigned int _RESERVED : 31; 
    } _flags;
}

+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;

- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)contextExpression;
- (id)predicateFormat;
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;
- (id)requestExpression;
- (BOOL)isCountOnlyRequest;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (unsigned int)expressionType;

@end
