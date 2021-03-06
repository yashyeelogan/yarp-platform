% Copyright (C) 2007 Michele Tavella <michele@liralab.it>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2 of the License, or
% (at your option) any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

function sig2 = align_crop(sig1, offset)
if (offset > 0)	
	%sig2 = sig1(offset+1:length(sig1));
    sig2 = sig1;
    sig2(1:offset, :) = 0;
elseif (offset < 0)
	sig2 = sig1(1:length(sig1)+offset-1, :);
else
	sig2 = sig1;
end
