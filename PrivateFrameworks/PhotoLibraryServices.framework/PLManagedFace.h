/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, PLManagedAsset;

@interface PLManagedFace : NSManagedObject  {
}

@property(retain) PLManagedAsset * asset;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } relativeRect;
@property short identifier;
@property(retain) NSString * albumUUID;

+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (short)identifier;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })relativeRect;
- (void)setRelativeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)delete;
- (void)setIdentifier:(short)arg1;

@end
