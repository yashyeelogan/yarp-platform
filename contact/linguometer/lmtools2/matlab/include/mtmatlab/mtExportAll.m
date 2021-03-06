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

function mtExportAll (path, driver, dpi)

if (isempty (dpi) == true)
	dpi = 300;
end

if (isempty (driver) == true)
	driver = 'psc2';
end

if (isempty (path) == true)
	path = 'auto';
end

for fig = 1:20000
	if (ishandle (handle (fig)) ~= 0)
		mtExport (fig, 'auto', path, driver, dpi);
	end
end
