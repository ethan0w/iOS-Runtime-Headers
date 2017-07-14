/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRTextureInfo : NSObject {
    unsigned int  _alphaInfo;
    unsigned int  _arrayLength;
    BOOL  _cubemap;
    void _dimensions;
    NSError * _error;
    unsigned int  _mipmapLevelCount;
    unsigned int  _pixelFormat;
}

@property (nonatomic) unsigned int alphaInfo;
@property (nonatomic) unsigned int arrayLength;
@property (nonatomic) BOOL cubemap;
@property (nonatomic) void dimensions;
@property (readonly) NSError *error;
@property (nonatomic) unsigned int mipmapLevelCount;
@property (nonatomic) unsigned int pixelFormat;

- (void).cxx_destruct;
- (unsigned int)alphaInfo;
- (unsigned int)arrayLength;
- (BOOL)cubemap;
- (void)dimensions;
- (id)error;
- (unsigned int)mipmapLevelCount;
- (unsigned int)pixelFormat;
- (void)setAlphaInfo:(unsigned int)arg1;
- (void)setArrayLength:(unsigned int)arg1;
- (void)setCubemap:(BOOL)arg1;
- (void)setDimensions;
- (void)setMipmapLevelCount:(unsigned int)arg1;
- (void)setPixelFormat:(unsigned int)arg1;

@end
