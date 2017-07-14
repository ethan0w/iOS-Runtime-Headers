/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutPointRelationship : NSObject <NSLayoutRelationship> {
    NSLayoutPoint * _firstLayoutPoint;
    NSLayoutPoint * _secondLayoutPoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutPoint *firstLayoutPoint;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *relationshipDescription;
@property (readonly, copy) NSLayoutPoint *secondLayoutPoint;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstLayoutPoint;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildrenRelationships;
- (id)relationshipDescription;
- (id)secondLayoutPoint;

@end
