/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {
    struct MTLStencilDescriptorPrivate { 
        unsigned int stencilCompareFunction; 
        unsigned int stencilFailureOperation; 
        unsigned int depthFailureOperation; 
        unsigned int depthStencilPassOperation; 
        unsigned int readMask; 
        unsigned int writeMask; 
    }  _private;
}

@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*stencilPrivate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)depthFailureOperation;
- (unsigned int)depthStencilPassOperation;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)readMask;
- (void)setDepthFailureOperation:(unsigned int)arg1;
- (void)setDepthStencilPassOperation:(unsigned int)arg1;
- (void)setReadMask:(unsigned int)arg1;
- (void)setStencilCompareFunction:(unsigned int)arg1;
- (void)setStencilFailureOperation:(unsigned int)arg1;
- (void)setWriteMask:(unsigned int)arg1;
- (unsigned int)stencilCompareFunction;
- (unsigned int)stencilFailureOperation;
- (const struct MTLStencilDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)stencilPrivate;
- (unsigned int)writeMask;

@end
